#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        vector<int> num(n);
        
        for(int i=0; i<n; i++)
            scanf("%d", &num[i]);

        int flag=-9;
        for(int i=0; i<n;i++){
            if(num[i]>0){
                flag =i; 
                break;
            }
             
        }
        long long ans=0;
        for(int i=flag ; i<n-1; i++){
            if(num[i])
                ans += num[i];
            if(num[i]==0)
                ans ++;

        }
        if(flag==-9) cout<<0<<endl;
        else
        cout<<ans<<endl;
    }
    
    return 0;
}