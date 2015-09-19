#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
	int r;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main()
{
	int t,a,b,ans;
	cin>>t;

	while(t--)
	{
		cin>>a>>b;
		ans = a>b?a-b:b-a;
		a=abs(a);
		b=abs(b);
		ans = ans/gcd(a,b);
		cout<<ans<<endl;

	}
	return 0;
}