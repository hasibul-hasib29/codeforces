#include<bits/stdc++.h>
using namespace std;

int main(){
    long long p[12];
    p[0]=1;
    for(int i=1; i<11;i++){
        p[i] = p[i-1]*i;
    }

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        n = 10-n;
        int sum = (p[n]/(2*p[n-2]))*6;
        cout<<sum<<endl;
    }
    
    
    return 0;
}