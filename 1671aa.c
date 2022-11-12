#include<stdio.h>
#include<string.h>
int main(){

    // int a;
    // printf("enter test cases ");
    // scanf("%d",&a);

    char s[2][55];

  
    for (int i = 0; i <2; i++)
    {
        printf("\n Enter a string %d: ", i+1);
        scanf(" %[^\n]", s[i]);    // for input also space, for this [^\n] means when get a new line command it will input next,; 
    }
    


 int a=0;
    while (a<2)
    {
        // printf("%s", s[a]);
        printf("\n");
        printf(s[a]);
        a++;
    }
    
    

    return 0;

}