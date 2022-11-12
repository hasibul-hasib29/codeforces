#include<stdio.h>
#include<string.h>
int main(){
    int test;
    scanf("%d", &test);



    while (test--)
    {
        char s[105] = {'\0'}; // set with null
    char a[105] = {'\0'}, temp = '\0';
    scanf("%s", s);
    int len, tablet =0;
    len = strlen(s);
    for (int i = 0; i < len; i++)
    {   
        if (i==0)
        {
            temp= s[i];
        }
        
        if (temp>s[i])
        {
            temp = s[i];
            tablet = i;
            
        }
        
       
    }
    s[tablet] = '9';

    int j=0;
    for (int i = 0; i < len; i++)
    {  if (s[i]!= '9')
        {
         a[j] = s[i];
         j++;
        }
    
      
    }
  
    printf("%c %s\n",temp, a);
    }
    

   
    
 
    return 0;
}