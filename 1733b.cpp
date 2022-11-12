#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n, ara[2];
        cin>>n>>ara[0]>>ara[1];
        long long sum;
        sum  = ara[1]*ara[1] + ara[0]*ara[0];
        if(sum==n-1){
            int k=2;
            long long i=1;
            long long z;
                
            while(k--){
                z=ara[k];
            if(z){
            for(; i<=(n-z+1);i+=z+1){
                for(int j=0; j<z; j++){
                    cout<<i<<" ";
                }
            }
            cout<<endl;}
            
            }
            
        }
        else cout<<-1<<endl;
    }
    
    return 0;
}
// 1 2 3 4 5 6 7 8 9
    // 1 1 4 4 6 6 8 8 think different scope