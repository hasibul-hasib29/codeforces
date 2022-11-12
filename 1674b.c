#include<stdio.h>
#include<string.h>

int main()
{
  
    
    int test;
     scanf("%d", &test);
     char s[test][2];

     int y[test];

     for (int i = 0; i < test; i++)
     {
        int x=0;
        scanf("%s",s[i]);

        if (s[i][0]>s[i][1])
        {
            x = s[i][1]-96;
        }
        if (s[i][0]<s[i][1])
        {
            x = s[i][1]-97;
        }
        
        y[i] = (25*(s[i][0]-97))+x;
     }

        for (int i = 0; i < test; i++)
        {
            printf("%d\n", y[i]);
        }
        
     
     
       
    
    
    return 0;
}