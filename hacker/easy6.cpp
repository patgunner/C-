#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;

	while(t--)
	{
		string s;
		long int z=0,o=0,ans1=0,ans2=0,zpos,opos,i;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='Z')
				{
					z++;
					ans2+=o;
					zpos=i;
				}
			else if (s[i]=='O')
				{
					o++;
					ans1+=z;
					opos=i;
				}
		}
		if(opos==s.length() || zpos==s.length() || abs(opos-zpos)==z || abs(zpos-opos)==o)
		{
			cout<<"0\n"<<endl;
			continue;
		}
		else if(ans1>ans2)
			cout<<ans2<<endl;
		else
			cout<<ans1<<endl;
	}	
}