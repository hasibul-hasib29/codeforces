#include<stdio.h>
#include<string.h>
int main(){
    int n,k;
   
    scanf("%d%d", &n, &k);

    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int l=0, r = l+k, temp;
    while (r<n)
    {
        if (ara[l]>ara[r])
        {
            temp = ara[r];
            ara[r] = ara[l];
            ara[l] = temp;
        }

        l++; r++;
        
    }

    int batti=1;
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d  ", ara[i]);
    // }
    
    for (int i = 0; i < n-1; i++)
    {   

        for (int j = 0; j < n-1-i; j++)
        {
           if (ara[j]>ara[j+1])
           {
            temp = ara[j+1];
            ara[j+1] = ara[j];
            ara[j] = temp;
            batti=0;
           }
           if (batti==0)
           {
            break;
           }
           
        }
        
    }

    if (batti)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    
    
    
    
   
    return 0;
}