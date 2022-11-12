#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int candle=a;
    int extra;
    while (a)
    {   
        extra = a%b;
        a = a/b;
        if(a==0)
        break;
        
        candle += a;
        
        a = a+ extra;

        
    }

    cout<<candle<<endl;

    cout<<"amader desh bangladesh"<<endl;
    
    return 0;
}

// some changes
// hey changers