#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while (test--)
    {
        long long ara[4];
        int zero=0;
        for(int i=0; i<4;i++){
            cin>>ara[i];
            if(!ara[i] )  zero++;
        }
        
        double x, y,z;
        if(zero==1) cout<<1<<endl;
        else if(zero == 2) cout<<0<<endl;
        else{
             x = ((double)ara[0]/ara[1])*((double)ara[3]/ara[2]);
            
            // cout<<x<<endl;
            y = ceil(x);
            z = 1/x;
            double  m = ceil(z);
            // cout<<y<<endl;

          if(x==1) cout<<0<<endl;
             else if(x==y || m==z) cout<<1<<endl;
             else  cout<<2<<endl;

        }
       
        
       
    }
    
    return 0;
}