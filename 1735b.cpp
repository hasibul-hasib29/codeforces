#include<bits/stdc++.h>
using namespace std;
// void counter(int &ct, int a, int b){

//     while (b>a)
//     {
//         b = b/a;
//         ct += b;
//     }
    

// }
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int t;
        cin>>t;
        vector<int> v(t);
        int ct =0;
        for(int i=0; i<t; i++){
            cin>>v[i];

        }
        sort(v.begin(), v.end());

        if(v[0]==v[t-1]) cout<<0<<endl;
        else if(v[0]==1) cout<<accumulate(v.begin(), v.end(), -t)<<endl;
        else{
        int a = 2*v[0] -1;
        for(int i=1; i<t;i++){
            int b = 0;
            if(v[i]%a){
                b = v[i]/a;
                ct++;
            }
            else{
                b = v[i]/a;
            }
            ct+=(b-1);
        }

        cout<<ct<<endl;
        }

    }
    
    return 0;
}