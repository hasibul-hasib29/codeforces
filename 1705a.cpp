#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while (test--)
    {
        int n, x;
        cin>>n>>x;
        vector<int> num(2*n);
        for(int i=0; i<2*n; i++)
            cin>>num[i];
        
        sort(num.begin(), num.end());

        bool flag = true;
        for(int i =0; i<n; i++){
            
            int d = num[i+n] - num[i];
            if(d<x){
                flag = false;
                break;
            }

        }

        if(flag) cout<<"YES\n"; 
        else cout<<"NO\n";
    }
    
    return 0;
}