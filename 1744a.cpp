#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int hash[55]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        string st;
        cin>>st;

        bool flag = true;
        map<int, char> mp;
        for(int i =0; i<n; i++){
            hash[a[i]]++;
            char ch = st[i];
            if(hash[a[i]]==1)
            mp[a[i]] = ch;

            if(hash[a[i]]>1){
                if(mp[a[i]]!=st[i]){
                    flag = false ;
                    break;

                }
            }
        }

        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}