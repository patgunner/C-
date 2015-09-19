#include<bits/stdc++.h>

using namespace std;

vector <long> v(500001);
int chk[10000000]={0};
int main()
{
	ios_base::sync_with_stdio(false);
	long int k,ans;
	bool c;

	v[0]=0;
	for(long i=1;i<=500001;i++)
	{
		ans=v[i-1]-i;
		if(ans>0 && chk[ans]==0)
			{
				v[i]=ans;
				chk[ans]=1;
			}
		else
			{
				ans=v[i-1]+i;
				v[i]=ans;
				chk[ans]=1;
			}

		//cout<<"v[i] = "<<v[i]<<endl;
	}

	cin>>k;
	while(k!=-1)
	{
		cout<<v[k]<<endl;
		cin>>k;
	}
	return 0;	
}