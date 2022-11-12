#include<stdio.h>
#include<string.h>
int main(){

    int a;

    scanf("%d",&a);

    char st[55];
    int len, sign1, sign2;
    while (a--)
    {
        scanf("%s", st);
        len= strlen(st);
        sign1 =0;
        sign2 =0;
        if(len==1){
            printf("NO\n");
            
        } 
        if (len==2)
        {
            if (st[0]==st[1])
            {
                printf("YES\n"); 
                
            }
            else {
                printf("NO\n");
                
            }            
        }
        
        if (len>=3)
        {         
        
                   for (int i = 0; i <=len-1; i++)
        {
            if(st[i]==st[i+1]) sign1 =1;

            if (st[i]!=st[i+1])
            {   
    if (i+1 == len-1)
                {
                //    printf("No\n");
                 goto osanti;
                   break;
                }
                
                 

                if (st[i+1]!=st[i+2] && (i+2)<=len-1 && (i+1) <= len-1)
                {
                    
                    printf("NO\n"); 
                    
                    break;
                }

                
                
                
                if (st[i+1]==st[i+2] && (i+2)<=len-1 && (i+1)<= len-1)
                {
                    
                        sign2=1;
                        i=i+1;
                    
                }
            
            }
             if (st[i+1]==st[i+2] && (i+2)<=len-1)
                {
                    
                        sign2=1;
                        i=i+1;
                    
                }
            
           
        }

        if (sign1 ==1 && sign2==1)
            {
                printf("YES\n"); 
            }
      else {
          osanti: printf("NO\n");

        }
        



    }
    
    
    }
    return 0;

}