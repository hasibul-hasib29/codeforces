#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n; int k;cin>>n>>k;
		int zct=0, oct=0;
		for(int i=0; i<n; i++){
			int a;cin>>a;
			if(a) oct++;
			else zct++;


		}
		if(zct==n) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}
	