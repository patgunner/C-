#include<bits/stdc++.h>

using namespace std;

int main()
{
	long n,i,j;
	long long h;
	cin>>n;
	while(n!=0)
	{
		vector<long long> v;
		for(i=0;i<n;i++)
		{	
			cin>>h;
			v.push_back(h);
		}

		stack<long long> s;
		long long areatop, maxarea=0, tp;
 
		i=0;
		while(i<n)
		{
			if(s.empty() || v[s.top()]<=v[i])
			{
				s.push(i++);
			}
			else
			{
				tp = s.top();
				s.pop();

				areatop = v[tp] * (s.empty()? i : i-s.top()-1);
				if(maxarea < areatop)
					maxarea = areatop;

			}
		}

		while(s.empty()==false)
		{
			tp = s.top();
			s.pop();
			areatop = v[tp] * (s.empty() ? i : i-s.top()-1 );

			if(maxarea < areatop)
					maxarea = areatop;
		}
		/*for(i=0;i<n-1;i++)
		{
			long long count=1;
			//nmax=v[i];
			for(j=i+1;j<n;j++)
			{
				if(v[i]>v[j])
					break;
				else
				{
					count++;
				}
			}
			//cout<<"*"<<max<<endl;
			if(count*v[i]>max)
				max=count*v[i];
		}*/

		cout<<maxarea<<endl;
		cin>>n;
	}
}

