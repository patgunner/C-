#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t,n,i,flag;
	cin>>t;
	while(t--)
	{
		flag=1;
		cin>>n;
		int count[1001],num;
		memset(count,0,1001*sizeof(int));
		for(i=0;i<n;i++)
		{
			cin>>num;
			count[num]++;
		}

		for(i=0;i<n/2;i++)
		{
			if(count[i]+count[n-i-1]!=2)
				{
					flag=0;
					break;
				}
		}
		if(n%2==1)
			if(count[n/2+1]!=1)
				flag=0;

		if(flag==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}