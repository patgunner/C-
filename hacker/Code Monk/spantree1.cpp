#include <bits/stdc++.h>

using namespace std;

#define max 40001
#define nmax 5001

long m,tp,n1,n2,x,y,n;
int arr[nmax];
pair<int,int> p[max];

int root(int x)
{
	while(x!=arr[x])
	{
		arr[x]=arr[arr[x]];
		x=arr[x];
	}
	return x;
}

void unison(int a, int b)
{
	arr[a]=b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;

	while(t--)
	{
		long i;
		cin>>n>>m;1
		
		for(i=1;i<=m;i++)
		{
			cin>>x>>y;
			p[i].first=x;
			p[i].second=y;
		}
		for(i=1;i<=n;i++)
			arr[i]=i;

		for(i=1;i<n;i++)
		{
			cin>>tp;
			n1=p[tp].first;
			n2=p[tp].second;
			n1=root(n1);
			n2=root(n2);
			unison(n1,n2);
		}
		int cnt=0;
		for(i=1;i<=n;i++)
		{
			if(arr[i]==i)
				cnt++;
		}
		if(cnt==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}