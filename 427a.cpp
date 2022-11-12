#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	vector<int> v(n);

	int crime =0, hire =0;
	bool fcrime = true, fhire = false;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		if(fcrime && v[i]<0){
			crime +=v[i];

		}

		if(v[i]>0){
			hire +=v[i];
			fcrime = false;
		}

		if(!fcrime && v[i]<0){
			hire +=v[i];
			if(hire<0){
				crime+=hire;
				hire =0;
			}
		}
	}


	cout<<abs(crime)<<endl;
	
	return 0;
}