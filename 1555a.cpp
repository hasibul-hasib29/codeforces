#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        long long n;
        cin>>n;
        if(n<=6) cout<<15<<endl;

        else if(n%2) cout<<(n+1)*5/2<<endl;
        else cout<<n*5/2<<endl;
    }
    
}