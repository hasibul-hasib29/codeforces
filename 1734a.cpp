#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n ;
        vector<int> num(n);

        for(int i=0; i<n; i++){
            cin>>num[i];
        }

        sort(num.begin(), num.end());

        int l=0, r=2;
        int ans = INT_MAX;
        int cache;
        while (r<n)
        {
            cache = num[r]-num[l];
            if(cache<ans)
            ans = cache;

            l++; r++;
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}