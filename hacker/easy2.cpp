#include<bits/stdc++.h>
#include<string>
//using std::string;

using namespace std;

int main()
{
	int t;
	long int i;
	scanf("%d",&t);
	vector<int> v;

	while(t--)
	{
		string s;
		vector<int> v;
		long r=0,k=0;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='R')
				{
					v.push_back(-1);
					r++;
				}
			else if(s[i]=='K')
				{
					v.push_back(1);
					k++;
				}
		}
		
		
		long int max_so_far=0, max_ending_here=0,ans=0;
		for(i=0;i<s.length();i++)
		{
			max_ending_here+=v[i];
			if(max_ending_here<0)
				max_ending_here=0;
			else if(max_ending_here > max_so_far)
				{
					max_so_far=max_ending_here;
				}
		}

		
		if(max_so_far==0)
		{
			ans=s.length()-1;
		}
		else
		{
			ans=max_so_far+r;
		}

		printf("%ld",ans);

	}

	return 0;
}
