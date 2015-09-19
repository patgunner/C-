#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;

	long a,b;
	while(t--)
	{
		int p1,p2;
		long count=0,temp;
		cin>>a>>b;

		if(a>0 && (a & (~a + 1))!=a)
		{
			temp=a;
			while (temp>0 && (temp & (~temp + 1))!=temp) /* While x is even and > 1 */
   			{
   				temp >>= 1;
   				count++;
   			}
   			a=temp;
   		}
		if(a<=b)
		{
				while(a!=b)
				{
					a=a*2;
					count++;
				}
				cout<<count<<endl;
		}
		else
		{
			while(a!=b)
			{
				a=a/2;	
				count++;
			}
			cout<<count<<endl;
		}
	}
}