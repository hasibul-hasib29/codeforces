#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(){

    int test;
    scanf("%d", &test);
    
    while (test--)
    {
         int a;
    scanf("%d", &a);
    int ara[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&ara[i]);
    }

     int batti=0, temp;
    for (int i = 0; i < a-1; i++)   //sorting
    {   

        for (int j = 0; j < a-1-i; j++)
        {
           if (ara[j]>ara[j+1])
           {
            temp = ara[j+1];
            ara[j+1] = ara[j];
            ara[j] = temp;
            batti=1;
           }
         
           
        }
          if (batti==0)
           {
            break;
           }
    }

    int flag=0;
    int l=0, r=l+1, basket =0 ;  //check
    while (r<a)
    {   
        if (abs(ara[l]-ara[r])<=1)
        {
            l++; r++;
        }
        
        else{
            flag=1;
            break;
        }

    }
    if(flag)
        printf("NO\n");

    else
        printf("YES\n");
    }
    
   
    
    return 0;
}