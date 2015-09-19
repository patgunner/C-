#include<bits/stdc++.h>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	long long t,a,b,c;
	long long ans=0;
	cin>>t;

	while(t--)
	{
		cin>>a>>b>>c;
		ans = a*a - 2*b;
		cout<<ans<<endl;
		
	}
	return 0;
}