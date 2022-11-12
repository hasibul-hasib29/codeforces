
/*****************************
*
* here is my name
*
************************/
#include<stdio.h>
#include<limits.h>
int main(){
    int a;
   //printf("start \n \n");
    scanf("%d", &a);
    int juri[a], flag[10005] = {0};
    int max=INT_MIN, maxx = INT_MIN;

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &juri[i]);
        if (max<juri[i])
        {
            max=juri[i];
        }
        flag[juri[i]]++;
    }                                                                                                                                                                                                                                        

    for (int i = 0; i < a; i++)
    {
        if (flag[juri[i]]==2 || max%(juri[i])!=0)      // see. what divisor is in another number and find the only max of them
        {
            if (maxx<juri[i])
            {
                maxx = juri[i];
            }
            
        }
        
    }
    
    printf("%d %d\n", max, maxx);
    
    return 0;
}   