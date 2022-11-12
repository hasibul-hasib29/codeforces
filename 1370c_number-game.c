#include<stdio.h>
#include<math.h>
int count=0;
int has_oddorNOt(int num){
    double db;
    db = (log(num))/(log(2));
    double ab;
    ab = db - (int)(db);
    if (ab==0)
    {
        return 0;
    }
    else 
        return 1;
    
    
}
int findoDDdivisor(int num){
    for (int i = (num/2)-1; i>1; i=i-2)
    {
        if (num%i==0)
        {
            return i;
        }
        
    }
    
}
int checkpoint(int a){
    int odd ;
    // if (a==1)
    // {   count=0;
    //     return 1;
    // }
    
    if (a%2)
    {
        a = 1 ;//because divide a/a and operation done
        count++;
        return 1;
    }
    else{

        if (has_oddorNOt(a))  //check if it is divisable by odd or not
        {
            odd = findoDDdivisor(a);
            a = a/odd; // oone operation done 
            count++;
            checkpoint(a);
        }
        else{
            a = a-1;
            count++;
            if (a==1)
            {
                return count;
            }
            
           
            
           checkpoint(a);
          
           
        }
        


    }
    
    
}
int main(){

    int test , xx;
    scanf("%d", &test);
    while (test--)
    {
        int n;
    //printf("numbe : ");

    scanf("%d", &n);
    if (n==1)
    {
        printf("FastestFinger\n");
    }
    else{
       checkpoint(n);
     //  printf("\n counte %d is \n",  count);
    if (count%2)
    {
        printf("Ashishgup\n");
    }
    else{
        printf("FastestFinger\n");
    }
    }

    count=0;

    }
    
    // if (n==1)
    // {   
    //    
        
    //     // kono operation jabe nak
    //     // f jite jabe
    //     count=0;
    // }
   
    
    
     
    
    
    
    
    return 0;
    }
