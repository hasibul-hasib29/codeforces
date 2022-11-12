#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long int> num(n);
        long long sum1 =0; 
        long long sum2=0;
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