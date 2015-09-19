#include<bits/stdc++.h>

using namespace std;

struct node
{
	long long num;
	node *next;
};

map<long,node*> m;

int main()
{
	int t;
	long count;
	cin>>t;

	long long n, a, temp;
	while(t--)
	{
		cin>>n;
		m.clear();
		for(long i=0;i<n;i++)
		{
			cin>>temp;
			count=0;
			a=temp;
			while(a!=0)
			{
				count+=a&1;
				a>>=1;
			}
			node *t = new node;
			t->next=NULL;
			t->num =temp; 

			if(m.find(count)==m.end())
				m[count]=t;
			else
			{
				node *tp = m[count];
				while(tp->next!=NULL)
					tp=tp->next;
				tp->next=t;
			}

		}

		map<long,node*>::iterator it;
		for(it=m.begin();it!=m.end();it++)
		{
			node *p = it->second;
			while(p!=NULL)
			{
				cout<<p->num<<" ";
				p=p->next;
			}
		}
		cout<<endl;
	}
}