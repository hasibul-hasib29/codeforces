#include<stdio.h>
#include<string.h>

int main()
{
    
    // int n1=11, n2=10;
    // printf("[1] %d; %f;\n", n2%n1, (n1+n2)/2);
    // printf("[2] %c\n", (n1%2)?'Y':'N');
    // if(n1-->n2)
    //  printf("[3] %d--%d\n", n1,n2);

    // int lowrange, uprange, dudhvaat;
    // scanf("%d%d",&lowrange, &uprange);
    // if(lowrange>uprange){
    //     dudhvaat=lowrange;
    //     lowrange=uprange;
    //     uprange=dudhvaat;
    // }

    // lowrange  += lowrange%2;
    // printf("%d>%d\n", lowrange, uprange);

    char s1[104], temp;
    int same =0;
            scanf("%s", s1);
        
        
    
       
        int batti=0;
        for (int i = 0; i < strlen(s1); i++)
        {   
            batti = 1;
            for (int  j = 0; j < strlen(s1)-1-i; j++)
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

        for (int i = 0; i < strlen(s1)-1; i++)
        {
            if (s1[i]==s[i+1])
            {
               
            }
            
        }
        
        
   
    return 0;
}