#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	vector<long> v;
	long t,n,m,i,N,cnt=0;

	scanf("%ld",&t);
	while(t--)   
	{
		scanf("%ld",&N);
		for(i=0;i<N;i++)
		{
			scanf("%ld",&n);
			v.push_back(n);
		}
		sort(v.begin(),v.end());	
		cnt=0;m=1;

		for(i=1;i<N;i++)
		{
			if(v[i-1]!=v[i])
			{
				cnt+=(m*(m+1))>>1;
				m=1;
			}

			else 
			m++;
		}
		cnt+=(m*(m+1))>>1;
		printf("%ld\n",cnt);
		v.clear();
	}
	return 0;
}



