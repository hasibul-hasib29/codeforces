#include<stdio.h>
int main(){
    int a[2][2]= {1, 2, 3,5};
    int *ptr;
    ptr = a;
    for(int i=0; i<4; i++)
    printf("%d\n", *ptr++);
    return 0;
}