#include<bits/stdc++.h>

using namespace std;

struct node
{
	node *left,*right;
	int seq, wt;
	string st;
}*root=NULL;

node *create_node(string st, int seq)
{
	node *temp=new node;
	node *lft = new node;
	node *rght = new node;

	temp->wt=1;
	temp->seq=m--;
	rght->right=NULL;
	rght->left=NULL;
	rght->seq=m--;
	rght->wt=1;
	
	lft->left=NULL;
	lft->right=NULL;
	strcpy(lft->st,"nyt");
	lft->seq=m--;

	strcpy(rght->st,st);
	temp->right=rght;
	temp->left=lft;
	return temp;
}

void checktree(node *t)
{
	if(t==NULL)
		return 0;
	checktree(t->left);

	checktree(t->right);

}

void add_tree(node *temp)
{
	if(root==NULL)
		root=temp;
	else
	{
		node *t=root;
		while(t->left!=NULL)
		{
			t=t->left;
		}
		t=temp;
	}
}

int main()
{
	ifstream f1("input");
	ofstream f2("out");

	string in,out,s;
	int m=51;
	while(getline(f1,s));
		in+=s;

	map<char,int> mp;
	node *temp;

	for(i=0;i<in.length();i++)
	{
		if(mp.find(in[i])!=mp.end())
		{
			mp[in[i]]++;
		}
		else
		{
			mp[in[i]]=1;
			temp=create_node(in[i],m);
			add_tree(temp);
			m=m-3;
		}

	}

}