#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char s1[105];
    char s2[105];
    fgets(s1, 105, stdin);
    // scanf(" ");

    // fgets(s2, 105, stdin);

    int len = strlen(s1) -1;
    s1[len] = '\0';
    int flag =1;
    // tolower(s1);
    //    tolower(s2);
    for (size_t i = 0; i < len; i++)
    {
        // if(s1[i]>='A' && s1[i]<='Z')
        //     s1[i] += 32;

        //     if(s2[i]>='A' && s2[i]<='Z')
        //     s2[i] += 32;
        s2[len-i-1] = s1[i]; 
        // if(s1[i]>s2[i]){
        //     printf("1\n");
        //     flag =0;
        //     break;
            
        // }


        // if(s1[i]<s2[i]){
        //     printf("-1\n");
        //      flag =0;
        //     break;
           
        // }
 
        
    }
    s2[len] = '\0';
    

    // if(flag)
    //    printf("0\n");
    


    puts(s2);
    printf("\n");
    puts(s1);

    return 0;

}