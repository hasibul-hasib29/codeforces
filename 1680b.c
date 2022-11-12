#include<stdio.h>
#include<stdlib.h>
int main(){
    int test , diff, ara[3], a, max, middle;
    scanf("%d", &test);

    while (test--)
    {
         for (int i = 0; i < 3; i++)
    {
        scanf("%d",&ara[i]);
    }

        diff = abs(ara[0]-ara[1]);
        max = diff*2;
        middle = (int)(max/2) +1;

        if (ara[2]>max || diff==1 || ara[0]>max||ara[1]>max)
        {
            printf("%d\n", -1);
        }
        else if (ara[2]<middle)
        {
            printf("%d\n", ara[2]+diff);
        }
        else if(ara[2]>=middle)
            printf("%d\n", ara[2]-diff);
        // printf("differen is %d\n", diff);
        
    
    }
    
   return 0;
}