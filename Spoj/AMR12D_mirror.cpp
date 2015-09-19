#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int flag=1;
		for(int i=0;i<s.length()/2;i++)
		{
			if(s[i]!=s[s.length()-i-1])
			{	
				flag=0;
				break;
			}
		}
		if(flag==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}