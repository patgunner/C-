#include<bits/stdc++.h>

#define mod 1000000007
#define max 1000005	
using namespace std;

long long int arr[max],arr1[max];

/*long long int stairs(long long int n)
{
	if(n>=0 && n<6)
		return arr[n];
	else
		return (stairs(n-2)+stairs(n-5)) % mod ;
}*/

int main()
{
	ios_base::sync_with_stdio(false);
	long long t,n,i;

	cin>>t>>n;
	arr[0]=0; arr[1]=0; arr[2]=1; arr[3]=0; arr[4]=1; arr[5]=1;
	for(i=6;i<=n;i++)
		{
			arr[i]=(arr[i-2]+arr[i-5])%mod;
		}

	int cur,k;
	while(t--)
	{
		
		cin>>cur>>k;

		if(cur<k)
			cout<<arr[cur]<<endl;
		else if(cur==k)
			cout<<(arr[cur] + 1)%mod<<endl;
		else
		{
			for(i=0;i<=k;i++)
				arr1[i]=arr[i];
			arr1[k]=(arr1[k]+1)%mod;

			for(i=k+1;i<=cur;i++)
				arr1[i]=(arr1[i-2] + arr1[i-5] + arr1[i-k])%mod;

			cout<<arr1[cur]<<endl;
		}
	}
	return 0;

}