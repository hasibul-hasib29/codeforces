#include<bits/stdc++.h>

using namespace std;
long long digitsum(long long a){
        long long sum = 0;
        while (a>0)
        {
            sum += a%10;
            a /=10;
        }
        return sum;
}
int main(){
    int test {};
    cin>>test;
    while (test--)
    {
       long long num{};
        cin>>num;
        

        long long sumf = digitsum(num);
        

        
        // cout<<"num of the all sum: "<<sum<<endl;
        long long b{};
       while (1)
       {
        b = __gcd(num, sumf);
        if(b>1)
            break;
         else{
            num++;
            sumf = digitsum(num);
         }
       }
       
       cout<<num<<endl;
    }
    return 0;
}