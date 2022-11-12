#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int test;
    cin>>test;
    while (test--)
    {
        
        
        int n;cin>>n;
            vector <long long> num(n);

            for(int i=0; i<n; i++){
                cin>>num[i];

            }
        int counter =0;int flag=1;
        while (1)
        {
             int light=1;
            

            for(int i=0, j=1; i<n-1, j<n; i++, j++){
                if(num[i]==0 && num[j]==0){
                    light =0;
                    break;
                }
            }

            if(!light){
                cout<<-1<<endl;
                break;
            }



              for(int i=0, j=1; i<n-1, j<n; i++, j++){
                if(num[i]>=num[j]){
                    num[i] = num[i]/2;
                    flag=0;
                    counter++;
                }
            }

                int possible =0;
             for(int i=0, j=1; i<n-1, j<n; i++, j++){
                if(num[i]<num[j]){
                  possible++;  
                }
            }

            if(possible == (n-1)){
                if(flag){
                    cout<<0<<endl;
                    break;
                }
                else
                    cout<<counter<<endl;
                    break;

            }



        }
        
        
    
        
    }
    
    return 0;
}