#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main(){
    cout<<fixed<< setprecision(14);
    int n;
    cin>>n;
    vector <double> drink {};
    double final_drink {}, sum {};
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        drink.push_back(a);
        sum +=a;
    }
    
    final_drink = sum/n;
    cout<<final_drink<<endl;
    return 0;
}