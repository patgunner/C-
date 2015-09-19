#include<bits/stdc++.h>

using namespace std;

/*struct compare
{
	bool operator()(string a,string b)
	{
		return a.length()>b.length();
	}
}*/

int main()
{
	ios_base::sync_with_stdio(false);
	int t,n,i;
	string s;

	//priority_queue<string, vector<string>,compare> pq;
	
	cin>>t;

	while(t--)
	{
		cin>>n;
		string a,b,s;
		vector<string> v;
		int flag=1;
		size_t found;
		for(i=0;i<n;i++)
		{
			cin>>s;
			v.push_back(s);
		}
		sort(v.begin(),v.end());
		for(i=0;i<n-1;i++)
		{
			a=v[i];
			b=v[i+1];
			
			found=b.find(a);
			if(found==0)
			{
				flag=0;
				break;
			}
		}

		if(flag==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}