#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    char s[n][107];
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", s[i]);
    }
    for (int i = 0; i < n; i++)
    {   
        if (strlen(s[i])>10)
        {
          printf("%c%ld%c\n", s[i][0], strlen(s[i])-2, s[i][strlen(s[i])-1]);
        }
        
      else  
       printf("%s\n", s[i]);
    }
    return 0;
}