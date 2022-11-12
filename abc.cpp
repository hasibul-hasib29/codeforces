#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        vector<string> s;
        for(int i=0; i<2; i++){
            string st;
            cin>>st;
            s.push_back(st);
        }


        cout<<"+++++++++++++++++++++="<<endl;
        cout<<s[1][2]<<endl;
    }
    
    return 0;
}