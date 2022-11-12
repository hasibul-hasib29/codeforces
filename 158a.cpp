#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    k--;
    int ara[n];
    int count=0;
    for(int i=0; i<n; i++){
        cin>>ara[i];
    }

    for(int i=0; i<n; i++){
        if(ara[i])
        if(ara[i]>=ara[k])
            count++;
    }

    cout<<count<<endl;
}