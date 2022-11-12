#include<iostream>
using namespace std;
int main(){
  long long  int a, num, n;
  cin>>num;
  n = num/2;
  if(num%2)
  a = -(n+1)*(n+1) + (n*(n+1));
  else
  a = -(n*n) + (n*(n+1));
  cout<<a<<endl;

    return 0;
}