#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long x;
    cin>>n>>x;

    vector<long long> num(n), cache(n);
    for(long long i=0 ; i<n; i++){
        cin>>num[i];
    }

    cache = num;
    sort(cache.begin(), cache.end());

    long long r=0, l= n-1;
    long long sum=0;
    bool flag= false;
    long long a, b;
    while (r<l)
    {
        sum = cache[r] + cache[l];
        if(sum==x){
            flag=true;
            a  = cache[r];
            b= cache[l];
            break;
        }
        else if(sum>x){
            l--;
        }
        else{
            r++;
        }
    }
    long long p,q;
    bool light = true;
    
    if(flag){
        for(long long i=0; i<n; i++){

                if(light){
                    if(num[i]==a){

                  p = i+1;
                  light = false;
                  continue;  
                }
                }
                
                
            
            
                if(num[i]==b)
                   q = i+1;
            
            // cout<<"RUNNING\n";
             
        }
    }
    

    if(flag){
        printf("%lld %lld\n", p, q);
    }
    else
        cout<<-1<<endl;
    return 0;
}