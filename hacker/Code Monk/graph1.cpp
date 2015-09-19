#include<bits/stdc++.h>

using namespace std;

bool visited[100001];
long long int sum;
long long int w[100001];

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
	sum+=w[s];

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
	adj[ed].push_back(ver);
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	long int n,m,i,V,E;
	long long int max;
	cin>>t;

	while(t--)
	{
		cin>>n>>m;
		graph g(n);
		for(i=0;i<n;i++)
			visited[i]=false;

		for(i=0;i<m;i++)
		{
			cin>>V>>E;
			V--;
			E--;
			g.add(V,E);
		}


     	for(i=0;i<n;i++)
     		cin>>w[i];

     	max=INT_MIN;
     	sum=0;
     	for(i=0;i<n;i++)
     	{
     		if(visited[i]==false)
     			g.dfs(i);
     		if(sum>max)
     			max=sum;

     		sum=0;

     	}

     	cout<<max<<endl;



	}
	return 0;
}