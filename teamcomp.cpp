#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while (test--)
    {
        int a{}, b{}, min{}, t1{}, t2{}, max{}, team{}, team1{}, extra{};
        cin>>a>>b;
        if (a==b)
        {
            team  = (a+b)/4;
        }
        else{
            min = a>b?b:a;
            max = min==a?b:a;
            t1 = min;
            t2 = (max-min)/2;
            team1 = t1>t2?t2:t1;
            extra = (2*(t1-team1))/4;
            team = team1+extra;
        }

        cout<<team<<endl;
        

    }
    
    return 0;
}   