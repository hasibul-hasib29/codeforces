#include<stdio.h>
int main(){
    int k, n, w, need, extra;
    scanf("%d%d%d", &k, &n, &w);
    need = ((w*(w+1))/2)*k;
    extra = need - n;
    if (extra<0)
        printf("%d\n",0 );
    
    
    else 
    printf("%d\n",extra );
    
    return 0;
}