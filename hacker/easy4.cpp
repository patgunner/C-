#include <bits/stdc++.h>

#define max 100002
#define mod 100000
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int ans[max],i,f=0;
	long long temp;
	memset(ans,-1,max*sizeof(int));
	int key,target,n;
	cin>>key>>target>>n;
	int a[n];
	for (i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	queue<int> q;
	q.push(key);
	ans[q.front()]=0;

	while(!q.empty())
	{
		long long m=q.front();
		q.pop();
		if (m==target)
		{
			f=1;
			break;
		}

		for(i=0;i<n;i++)
		{
			temp=a[i]*m;
			temp%=mod;
			if(ans[temp]==-1)
			{
				ans[temp]=ans[m]+1;
				q.push(temp);
			}
			if(temp==target)
			{
				f=1;
			}

		}
		if(f==1)
			break;
	}
	cout<<ans[target]<<endl;
	return 0;
}