#include <bits/stdc++.h>

//#define max 100000004

using namespace std;

map<int,long long> dp;

long long calc(int n)
{
	if(n==0)
		return 0;
		
	if(dp[n]!=0) return dp[n];

	long long t=calc(n/2)+calc(n/3)+calc(n/4);

	if(t>n)
		dp[n]=t;
	else
		dp[n]=n;

	return dp[n];

}

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	while(scanf("%d",&n)==1)
	{
		printf("%lld\n",calc(n));
	}
	return 0;

}