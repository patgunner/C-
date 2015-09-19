#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	long t,i,gvt=0;
	string s1,s2;
	cin>>t;

	while(t--)
	{
		long pos=1,f=1,chk1=0,chk2=0;
		gvt=0;
		cin>>s1;
		cin>>s2;

	/*	if(s1[0]=='.')
			pos=1;
		else if(s2[0]=='.')
			pos=2;
		else
			{
				cout<<"No"<<endl;
				f=0;
				break;
			}
	*/
		
		for(i=0;;i++)
		{
			if(s1[i]=='#'  && s2[i]!='#')
				{
					chk1=1;
					if(chk2==0)
						pos=2;
					break;
				}
			else if(s1[i]=='#'  && s2[i]=='#')
			{
				f=0;
				break;
			}
			if(s2[i]=='#'  && s1[i]!='#')
				{
					chk2=1;
					if(chk1==0)
						pos=1;
					break;
				}
		}
		if(f==0)
		{
			cout<<"No"<<endl;
			break;
		}
		for(;i<s1.length();i++)
		{
			if(s1[i]=='.' && pos==1)
				pos=1;
			else if(pos==1 && s1[i]=='#')
			{
				if(s2[i]=='.')
				{
					gvt++;
					pos=2;
				}
				else
				{
					cout<<"No"<<endl;
					f=0;
					break;
				}
			}
			else if(pos==2 && s2[i]=='.')
				pos=2;
			else if(pos==2 && s2[i]=='#') 
			{
				if(s1[i]=='.')
				{
					gvt++;
					pos=1;
				}
				else
				{
					cout<<"No"<<endl;
					f=0;
					break;
				}
			}	
		}
		if(f==1)
			cout<<"Yes"<<endl<<gvt<<endl;
	}
}