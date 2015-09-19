#include<bits/stdc++.h>

using namespace std;

struct value
{
	long pos,total,last,studs;
}val;

struct comp
{
	bool operator()(value a,value b)
	{
		return 	a.total>b.total;
	}
};

priority_queue <value,vector<value>,comp> Q;

int main()
{
	ios_base::sync_with_stdio(false);
	long c,p,n,i,temp1,temp2,z,tot;

	cin>>c>>p>>n;

	for(i=0;i<n;i++)
	{
		cin>>temp1;
		val.pos=i+1;
		val.total=temp1;
		val.last=temp1;
		val.studs=1;
		Q.push(val);
	}
	
	while(n<c)
	{
		val.pos=++i;
		val.total=0;
		val.last=0;
		val.studs=0;
		Q.push(val);
		n++;
	}

	for(i=0;i<p;i++)
	{
		cin>>temp2;
		val=Q.top();
		Q.pop();
		val.studs++;
		tot=val.last+temp2;
		val.last=temp2;
		z=tot*val.studs;
		cout<<val.pos<<" ";
		val.total=z;
		Q.push(val);
	}
	return 0;

}