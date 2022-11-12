#include<stdio.h>
#include<string.h>
int main(){
    char temp;
  
         int m;
        scanf("%d", &m);

        char s1[m];
     

        
            scanf("%s", s1);
        
        
    
       
        int batti=0;
        for (int i = 0; i < m-1; i++)
        {   
            batti = 1;
            for (int  j = 0; j < m-1-i; j++)
            {
                if (s1[j]>s1[j+1])
                {
                    temp = s1[j+1];
                    s1[j+1] = s1[j];
                    s1[j] = temp;
                    batti = 0;
                }
                
                
            }
            if (batti)
                {
                    break;
                }
            
        }
        
    
        
         printf("%s \n", s1);
         printf("\n ");




    return 0;
}   