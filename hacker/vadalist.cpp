#include<bits/stdc++.h>

using namespace std;

map<string,int> m;
int main()
{
	long n;
	cin>>n;
	string s;
	while(n--)
	{
		cin>>s;
		if(m.find(s)==m.end())
			{
				m[s]=1;
				//cout<<"Hello";
			}
	}
	cout<<m.size()<<endl;
	for(map<string,int>::iterator it = m.begin();it!=m.end();it++)
		cout<<it->first<<endl;

	return 0;

}