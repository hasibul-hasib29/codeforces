#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n, q, ans =0;
        cin>>n>>q;
        long long a[n];
        long long odd_ele =0, even_ele =0;
        for(long long i =0; i<n; i++){
            cin>>a[i];
            ans +=a[i];

            if(a[i]%2) odd_ele++;
            else even_ele++;
        }

        while (q--)
        {
            long long x,y;
            cin>>x>>y;

            if(x==1){
                ans = ans+ (odd_ele*y);

                if(y%2){
                    
                    even_ele = even_ele + odd_ele;
                    odd_ele = 0;
                }
                
            }
            if(x==0){
                ans = ans + (even_ele*y);
                if(y%2){
                    odd_ele = even_ele+odd_ele;
                    even_ele = 0;
                }
            }

            cout<<ans<<endl;
        }
        
    }
    
    return 0;
}