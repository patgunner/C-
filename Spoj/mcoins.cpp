#include<bits/stdc++.h>

using namespace std;

vector <bool> v(1000001);

int main()
{
	ios_base::sync_with_stdio(false);
	int k,l,m;
	long n,i;
	bool t1,t2,t3;

	cin>>k>>l>>m;

	v[0]=false;
	v[1]=true;
	v[k]=true;
	v[l]=true;
	for(i=2;i<=1000000;i++)
	{
		if(i==k || i==l)
			continue;
		else 
			{
				if(!v[i-1])
					t3 = true;
				else if(v[i-1])
					{
						t3 = false;
					}

				if((i-k>=0) && !v[i-k])
					t1 = true;
				else if((i-k)>=0 && v[i-k])
					{
						t1 = false;
					}
				else
					t1=t3;
				
				if((i-l)>=0 && !v[i-l])
					t2 = true;
				else if((i-l)>=0 && v[i-l])
					{
						t2=false;
					}
				else
					t2=t3;
			}

			if(!t1 && !t2 && !t3)
				v[i]=false;
			else
				v[i]=true;
			//cout<<"V["<<i<<"]="<<v[i]<<endl;
	}

	for(i=0;i<m;i++)
	{	
		cin>>n;
		if(v[n]==true)
			cout<<"A";
		else
			cout<<"B";
	}
}