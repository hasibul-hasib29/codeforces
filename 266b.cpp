#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    string st;
    cin>>st;
    
    for(int j=0; j<t; j++)
    for(int i=0;i<n-1;i++){

        if(st[i]=='B')
        if(st[i]!=st[i+1]){
            swap(st[i], st[i+1]);
            i++;
        }
        
        
    }
 
    cout<<st<<endl;
 
    return 0;
}