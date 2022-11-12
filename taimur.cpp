#include<iostream>
#include <vector>
using namespace std;
int main(){

    int test {};
    cin>> test;
    while (test--)
    {
        vector <int> rundata;
        for (int i = 0; i < 4; i++)
        {
            int a {};
            cin>> a;
            rundata.push_back(a);
        }
        int count {};
        int b {rundata.at(0)};
       for (auto i : rundata)
       {
            if (i>b)
            {
                count++;
            }
            
       }
       cout<<count<<endl;
        
    }
    
    
    return 0;
}