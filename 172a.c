#include<stdio.h>
#include<string.h>
int main(){
    
    int a;
     scanf("%d",&a);

    int max=0, flag = 20;
    char s[a][20];
    for (int i = 0; i < a; i++)
    {
       scanf("%s",s[i]);
    }
   
    for (int i = 0; i < a-1; i++)
    {
        
        for (int j = 0; j < strlen(s[0]); j++)
        {
            if(s[i][j]==s[i+1][j]){
                max++;
               
            }
            
            if(s[i][j]!=s[i+1][j]){
                break;
            }
        }
        if(max<flag) flag=max;
        max =0;
        
    }

    printf("%d\n", flag);
    
}