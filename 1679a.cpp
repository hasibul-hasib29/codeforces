#include<bits/stdc++.h>
using namespace std;
long long MIN(long long a){
    long long min = a/6;
    
    long long num;
    long long i=0;
    if((a%6))
    for(; i<=a; i++){
        num = a - 4*i;
        if(!(num%6)) {
            min = num/6;
            break;
        }

    }
    return (min + i) ;
}

long long MAX(long long a){
    long long min = a/4;
    
    long long num;
    long long i=0;
    if(a%4)
    for(; i<=a; i++){
        num = a - 6*i;
        if(!(num%4)) {
            min = num/4;
            break;
        }

    }
    return (min + i) ;
}
int main(){

    int t;
    cin>>t;
    while(t--){

        long long n;
        cin>>n;
        if(n%2) cout<<-1<<endl;
        else if(n==4 || n==6) cout<<1<<" "<<1<<endl;
        else{
            long long min = MIN(n);
            long long max = MAX(n);
            if(min<=0 || min >= n || max<=0 || max>=n)
                cout<<-1<<endl;
            else cout<<min<<" "<<max<<endl;
        }


    }

    return 0;

}
