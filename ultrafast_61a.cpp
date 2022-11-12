#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string num1{};
    string num2{};
    vector<int> num{};
    getline(cin, num1);
    getline(cin, num2);
    for (size_t i = 0; i < num1.size(); i++)
    {
        if(num1.at(i)==num2.at(i))
          num.push_back(0);
          else
            num.push_back(1);
    }
    for (auto i : num)
    {
        cout<<i;
    }
    cout<<endl;
    return 0;
}