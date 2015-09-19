#include<bits/stdc++.h>

using namespace std;

priority_queue <int> Q;

int main()
{
	ios_base::sync_with_stdio(false);
	long int n,num;
	cin>>n;

	for(int i=0;i<n;i++)
	{
			cin>>num;
			Q.push(num);
	}
	for(i=0;i<n;i++)
	{
		if(i==0 || i==1)
			cout<<"-1"<<endl;
		else
			cout<<
	}
	//priority_queue <int,vector<int>,Prio> Q;
	return 0;
}