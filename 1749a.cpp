#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        int m;
        cin>>n>>m;
        int col[10] {0};
        int row[10] {0};
        while (m--)
        {
            int r, c;
            cin>>r>>c;
            col[c]++;
            row[r]++;
        }

        bool rowFlag = false;
        bool colFlag = false;
        for(int i=1;i<=n;i++){
            if(row[i]==0) rowFlag = true;
            if(col[i]==0) colFlag = true;
        }

        if(rowFlag && colFlag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
}