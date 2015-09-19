#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;

	while(t--)
	{
		long i;
		long int n,k,p;
		cin>>n>>k>>p;

		long int arr[n+1],ktemp;

		for(i=0;i<=n;i++)
			arr[i]=i;

		for(i=0;i<k;i++)
			{
				cin>>ktemp;
				arr[ktemp]=0;
			}

		sort(arr,arr+n+1);
		//cout<<endl;
		for(i=0;i<n;i++)
			//cout<<arr[i]<<endl;

		if(p+k>n)
			cout<<"-1"<<endl;
		else
			cout<<arr[p+k]<<endl;
	}

}