#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n {};
    cin>>n;
    vector <int> magnet{};
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        magnet.push_back(a);
    }
    
    int bar {1};
    for (int i = 0; i <n-1; i++)
    {
        if (magnet[i]!=magnet[i+1])
        {
            bar++;
        }
        
    }
    cout<<bar<<endl;
    return 0;
}