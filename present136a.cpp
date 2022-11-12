#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num {};
    cin>>num;
    vector <int> final (num+1);
    for (int i = 1; i <=num; i++)
    {
        int t {};
        cin>>t;
        final.at(t) = i;

    }
    for (auto i : final)
    {   
        if (i==0)
        {
           
        }
        else
        
        cout<<i<<" ";
        
    }
    cout<<endl;
    
    
    return 0;
}