#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> num(n);
        int sum1 =0; 
        int sum2=0;
        for(int i=0; i<n;i++){
            cin>>num[i];
            if(num[i]<0)
                sum1 += num[i];
            else 
                sum2 += num[i];
        }
 
        sum1 = (-1)*sum1;
        cout<<abs(sum1-sum2)<<endl;
        
        
 
    }
    
    return 0;
}