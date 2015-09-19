#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t,h,a;
	cin>>t;
	while(t--)
	{
		int count=1;
		cin>>h>>a;
		h+=3;
		a+=2;

		//cout<<count<<endl;
		while(1)
		{	
			if(h>5 && a>10)
			{
				count+=2;
				h-=2;
				a-=8;
			}
			else if(h>20 && a<=10)
			{
				count+=2;
				h-=17;
				a+=7;
				//cout<<h<<"\t"<<a<<endl;
			}
			else 
			{
				cout<<count<<endl;
				break;
			}
		}
	}
	return 0;
}