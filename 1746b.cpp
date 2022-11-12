#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
	cin>>n;
	vector<int>num(n);
	 int r=n-1; 
	 int l=0;
	 bool flag = true;
	 for (int i = 0; i < n; i++){
		 cin >> num[i];
		 if(flag) {
			if(num[i]) l=i;
			flag = false;
		 }
		 if(num[i]==0) r = i;
	 }
        
	int ct=0;
	if(is_sorted(num.begin(), num.end())) cout<<0<<endl;
	else{
	while (l<r)
	{
		if(num[l]==1 && num[r]==0){
			num[r]++;
			num[l]--;
			ct++;
			}

			else if(num[r]==1) r--;
			else if(num[l]==0) l++;
			}

			cout<<ct<<endl;
		}

		
	}

	
	
            
                
        

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}