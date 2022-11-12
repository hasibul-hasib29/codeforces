#include<vector>
#include<iostream>
using namespace std;
int main(){

    int n;


    cin>>n;


    int pi;
    cin>>pi;
   
    int ara[108];
    int arap[pi];
   

    for(int i=0; i<pi; i++){
            cin>>arap[i];
         ara[arap[i]]++;

    }
    int qi;
    cin>> qi;
    int araq[qi];
    for(int i=0; i<qi; i++){

        cin>>araq[i];
        ara[araq[i]]++;
    }

    int flag=1;
    for(int i=1; i<=n; i++){

        if(ara[i]==0){
            flag=0;
            
        }
    }
    //cout<<ara[4]<< " "<<ara[0]<<endl;
    
    if(flag)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;



    return 0;

}