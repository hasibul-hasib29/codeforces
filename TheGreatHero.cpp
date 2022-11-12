#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while (test--)
    {
        int attack, health, n;
        int cH, cV, total =0 , xp;
        cin>>attack>>health>>n;
        vector <int> va(n);
        vector <int > vb(n);
        for (size_t i = 0; i < n; i++)
        {
            cin>>va.at(i);
             
        }
               for(int i=0; i<n; i++)
            cin>>vb.at(i);
        
        int i,it=0;
        for( i=0; i<n; i++){
            // if(attack>va.at(i)){
                
            //     xp = ceil((float)vb.at(i)/attack);   
            // }
            // else 
              xp  = ceil((float)vb.at(i)/attack);

              cout<<"\n the "<< i<<" the conditoin of xp "<<xp<<endl;
            

            health = health - xp*va.at(i);
            
            vb.at(i) -= xp*attack;
            total += vb.at(i);
             
           
                 it++;
                 

        }

        if(total<=0 && (health<=0 || health>0))
             cout<<"yes hero do it "<< health<<" "<<total<<" and"<< xp<<endl;
        else if(health <=0 && total >0)
           cout<<"the villain "<<total<< " and " <<health<<endl;



    }
    
    return 0;
}