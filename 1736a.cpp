#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        int fre0a[2] = {0};
        int fre0b[2] = {0};
        int sum[2] = {0};
        for(int i=0; i<n; i++){
            cin>>a[i];
            fre0a[a[i]]++;
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
            sum[abs(a[i]-b[i])]++;
            fre0b[b[i]]++;

        }

        if(sum[0]==n) cout<<0<<endl;
        else if(sum[1]==1 ||fre0a[0]==fre0b[0]) cout<<1<<endl;
        else if(sum[1]>1 && (fre0a[0]==n || fre0b[0]==n )) cout<<abs(fre0b[1]-fre0a[1])<<endl;
        else if(sum[1]>1 ) cout<<abs(fre0b[1]-fre0a[1])+1<<endl;
    }
    
    return 0;
}