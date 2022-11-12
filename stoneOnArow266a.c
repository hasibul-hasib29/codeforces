#include<stdio.h>
#include<string.h>
int main(){
    int a, batti=0;
    scanf("%d",&a);

    char s[a];
    for (int i = 0; i < a; i++)
    {
        scanf(" %c", &s[i]);
    }
    
    
    for (int i = 0; i < a-1; i++)
    {
        if (s[i]==s[i+1])   // jodi soman hoy taile 2 tar modde (i.e. RR)... 1 ta bad jabe
        {
            batti++;    
        }
        
    }

    printf("%d\n", batti);
    
    return 0;
}