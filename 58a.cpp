#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[] = "hello";
    string st;
    cin>>st;
    int flag=0;
    int j=0;

   

    for(int i=0; i<size(st); i++){

        if(st[i]==s[j]){
            j++;
            flag++;
        }

    }

   
    if(flag==5)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}