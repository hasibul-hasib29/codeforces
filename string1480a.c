#include<stdio.h>
#include<strings.h>
int main(){


    int test;
    scanf("%d", &test);

    while (test--)
    {
         char s[55] = {'\0'};
    int i;
    scanf("%s", s);


    for ( i = 1; i <= strlen(s); i++)
    {
        if (i%2)
        {
            if (s[i-1]> 'a')
            {
              s[i-1] = 'a';
            }
            else
                s[i-1] = s[i-1]+1;            
        }
        else{
            if (s[i-1]< 'z')
            {
                s[i-1] = 'z';

            }
            else
                s[i-1] = s[i-1]-1;
        }
    }
    
    
    printf("%s\n", s);
    }
    
   
    return 0;
}