#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while (t--)

    {   
        vector<string>v;
        for(int i=0; i<8; i++){
            string s;
            cin>>s;
            v.push_back(s);
        }

        int row=0, col=0;
        char ch;
        char xx;
        bool flag = false;
        for(int i=0; i<8; i++){
            ch='c';
            row=0;
        	for(int j=0; j<8; j++){
        		 ch='R';

        		if(ch==v[i][j]){
        		 row++;
                 //cout<<"I am in row "<<v[i][j]<<endl;
        		 if(row==8){ flag = true; xx = v[i][j];
                 //cout<<"i am in row =8 "<<xx<<endl;

        		 	break;
        		 }

        		 // break;
        		}
        	}
            if(flag) break;
        	
        }
        

        // for coloumn
        if(!flag){
        	bool flag2 = false;
	for(int i=0; i<8;i++){
		 col=0;
		
		for(int j=0; j<8;j++){
			ch='B';
			if(ch==v[j][i]){
				col++;
               // cout<<"I am in col "<<v[j][i]<<endl;
				if(col==8){
					xx = v[j][i];
				 flag2 = true;
				 break;}

			}
			if(flag2) break;

		}
	}
        }
        
        cout<<xx<<endl;

        
        
    }
    
    return 0;
}