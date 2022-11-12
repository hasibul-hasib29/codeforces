#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int point= m*n;
    int count=0;
    int waste, curS;
    while (point)
    {
         waste = m+n-1;
         point -=waste;
         m--;
         n--;
         count++;

    }

    if(count%2)
    cout<<"Akshat"<<endl;
    else
    cout<<"Malvika"<<endl;
    
    return 0;
}