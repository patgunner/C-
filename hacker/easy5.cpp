#include <bits/stdc++.h>
#define max 101

using namespace std;

int main()
{
	int t,i;
	ios_base::sync_with_stdio(false);

	cin>>t;

	while(t--)
	{
		int n,k,arr[max];
		bool flag=true;
		string s;
		cin>>n>>k;
		memset(arr,0,max*sizeof(int));
		for(i=0;i<n;i++)
		{
			cin>>s;
			arr[s.length()]++;
		}

		for(i=1;i<max;i++)
		{	
			if(arr[i]%k!=0)
			{
				flag=false;
				break;
			}			
		
		}
		if(flag==true)
			cout<<"Possible\n";
		else
			cout<<"Not possible\n";
	}
}