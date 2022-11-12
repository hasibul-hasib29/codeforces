#include<stdio.h>
int main(){
    int test, item,  neg = -1;
    // printf("run my boy?\n");
    scanf("%d", &test);
    while (test--)
    {
        scanf("%d", &item);
        int flag=1, a[item], countN=0;
        


        for (int i = 0; i < item; i++)
        {
            scanf("%d", &a[i]);
            if (a[i]<0)
            {
                countN++;
            }
            
        }


        // making positive and negative exchange
        for (int i = 0; i < countN; i++)   
        {
            if (a[i]>0)
            {
                a[i] = a[i]*neg;
            }
            
        }
        
        for (int i = countN; i < item; i++)
        {
            if (a[i]<0)
            {
                a[i] = a[i]*neg;
            }
            
        }
        
        

        // shorting

        int l=0, r=1;
        while (r<item&&l<r)
        {
            if(a[l]>a[r]) {
                flag=0;
                break;
            }
            l++; r++;

        }
        
        if (flag)
        {
            printf("YES\n");
        }
        
        else printf("NO\n");

    }
    
    return 0;
}