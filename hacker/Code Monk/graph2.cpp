#include<bits/stdc++.h>

using namespace std;

bool visited[10001];
long long int sum;

class graph
{
	long v;
	list<long> *adj;

	public:
		graph(long v);

	void dfs(long s);
	void add(long ver,long ed);
};

graph::graph(long v)
{
	this->v=v;
	adj = new list<long>[v+1];
}

void graph::dfs(long s)
{
	
	visited[s]=true;
	sum+=1;

	list<long int>::iterator i;
    for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
        	if(!visited[*i])
			dfs(*i);
		}
	
}
void graph::add(long ver,long ed)
{
	adj[ver].push_back(ed);
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	long int n,m,i,V,E,tot;
	cin>>t;

	while(t--)
	{
		cin>>m;
		//graph g(100001);

		for(i=0;i<m;i++)
		{
			cin>>V>>E;
			V--;
			E--;
			visited[V]=true;
			visited[E]=true;
		}
		sum=0;
		for(i=0;i<10001;i++)
		{
			if(visited[i]==true)
     			sum++;
		}

     	cout<<sum<<endl;



	}
	return 0;
}