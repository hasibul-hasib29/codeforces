#include<iostream>
#include <vector>
using namespace std;
int main(){
    int test{};
    cin >> test;
    while (test--)
    {
        vector <int> num {};
        // int flag[10005] {};
        vector<int> flag (10005);
        int a;
        cin>>a;
        for (int i = 0; i < a; i++)
        {
            int b;
            cin>>b;
            num.push_back(b);
            flag[b]++;
            
            
        }
        int juri {};
        //int count {};
        for (auto k : flag)
        {   
            if (k>0)
            {
               juri = juri+ k%2;
            }
          //  count++;

            
        }
        if (juri==0)
        {
            cout<<2<<endl;
        }
        else
        cout<<juri<<endl;
        //cout<<"the numberof iteration is "<<count<<endl;
        
    }
    
    return 0;
}