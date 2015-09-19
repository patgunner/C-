#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	string a;
	int count=0;
	cin>>a;
	while(a[0]!='-')
	{	
		int sum=0,k=a.length(),open=0;
		for(int i=0;i<k;i++)
			{
				if(a[i]=='{')
					open++;
				else if(open>0)
					open--;
				else
				{
					open++;
					sum++;
				}

			}

		sum+=(open/2);
		cout<<++count<<". "<<sum<<endl;
		cin>>a;
	}
	return 0;
}



