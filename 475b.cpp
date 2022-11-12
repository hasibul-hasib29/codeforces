#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
int pf[N];
int n;
bool checkpoint(int a, int x){
    return pf[a]>=x;
}
int main(){
    cin>>n;
    vector<int> num(n);
    for(int i=0; i<n; i++){
        cin>>num[i];
        pf[i+1] = pf[i] + num[i];
    }
    int m;
    cin>>m;
    vector<int> q(m);
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        int hi = n, lo = 1;
    int mid;
    while (hi-lo>1)
    {
        mid = (hi+lo)/2;
        if(checkpoint(mid, x )) hi = mid;
        else lo = mid;
    }
    if(checkpoint(lo, x)) cout<<lo<<endl;
    else cout<<hi<<endl;
    }

    
    


    return 0;
}