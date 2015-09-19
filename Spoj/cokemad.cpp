#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	long long t,tt=1;
	char ch;
	cin>>t;

	while(t--)
	{
		long long int n,max=0,tmax=0,i;
		cin>>n;
		//ch=getchar();
		long long int arr[n];

		for(i=0;i<n;i++)
			{
				cin>>arr[i];
				tmax+=arr[i];
				if(tmax<0)
				{
					max=max + abs(tmax) ;
					tmax=0;
				}
				
			}
		cout<<"Scenario #"<<tt<<": "<<max+1<<endl;
		tt++;
	}	
}
