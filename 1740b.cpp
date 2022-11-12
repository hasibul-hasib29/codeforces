#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long sum = 0;
        long long max =-1;
        int n;
        cin>>n;
        
        for (int i = 0; i < n; i++)
        {
            long long a, b;
            cin>>a>>b;
            if(a>b)
            swap(a,b);
            

            sum +=a;

            if(b>max) max =b;
                
               

        }
        
        cout<<sum*2 + max*2<<endl;
    }

    return 0;
}