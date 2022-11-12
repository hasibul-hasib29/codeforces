
#include<stdio.h>
#include<math.h>
int main(){
    int test;
   // printf("input test:");
    scanf("%d",&test);
    while (test--)
    {
        long long a,  c;
        float diff, b;
        scanf("%lld", &a);

        b = (log(a))/ (log(2));   //what is  2 to the power of the number

        diff = b - (int)(b);

       // printf("diff is %f\n", diff);
       if(diff==0)
        printf("NO\n");

        else 
            printf("YES\n");

        
        
    }
    
    return 0;
}