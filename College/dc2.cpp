//program:-shannon fano(data compression practical 1).
//input from file named "input".
//output to a file named "out".
//compile with g++ -std=c++11 `filename`
//date:-08/07/2015
#include<bits/stdc++.h>
using namespace std;
#define max 256
struct alpha
{
	string word;
	char ch;
	int f;
}code[max];

struct node
{
	node *left;
	node *right;
	char nc;
	int nf;
}*ptr=NULL;

queue<node*> q;

/*bool Prio(alpha a, alpha b)
{
	return a.f>b.f;
}*/

//priority_queue<alpha,vector<alpha>,Prio> Q;

node *create_node(int tf)
{
	node *ptr=new node;
	ptr->nf=tf;
	ptr->left=NULL;
	ptr->right=NULL;
}

/*void insert_tree()
{
	while(Q.size!=0)
	{
		alpha *t1=new alpha;
		alpha *t2=new alpha;

		*t1=Q.front();
		Q.pop();
		*t2=Q.front();
		Q.pop();

		alpha *t3= new alpha;
		t3->f=t1->f+t2->f;
		ptr=create_node(t3->f);
		ptr->left=t1;
		
	}
}*/

bool comp(node *a,node *b)
{
	return a->f>b.f;
}

void insert_tree()
{
		while(q.size!=0)
		{
			node *t1=create_node(q)
			t1 = q.pop();
			t2 = q.pop();
			t3 = create_node('*',code[it]->f + code[it+1]->f);
			t3 = create
			insert_tree(t3,t1,t2);
			q.push(t3);
			ct--;
			sort(q,q+ct,comp);
		}
}

bool cmp(alpha a,alpha b)
{
	return a.f>b.f;
}

	
int main()
{
	ifstream f1("input");
	ofstream f2("out");

	//priority_queue<alpha,code<alpha>,cmp> pq;

	vector<node*> store;
	string in,out;
	string s;
	while(getline(f1,s))
		in+=s;
	map<char,int> temp;
	map<char,string> code_word;
	for(int i=0;i<in.length();i++)
	{
		if(temp.find(in[i])!=temp.end())
			temp[in[i]]++;
		else
			temp[in[i]]=1;
	}
	int count=0;
	for(auto it=temp.begin();it!=temp.end();it++)
	{
			code[count].ch=it->first;
			code[count].f=it->second;
			count++;
	}
	//sort structure
	
	sort(code,code+count,cmp);

	//adding to another map		
	for(i=0;i<count;i++)
	{
		q.push(create_node(code[i].ch,code[i].f));
	}
	node *t1,*t2,*t3;
	
	insert_tree();
	

	/*for(i=0;i<count-1;i++)
	{
		t1= create_node(code[i]->ch,code[i]->f);
		t2= create_node(code[i+1]->ch,code[i+1]->f);
		t3= create_node('*',code[i]->f + code[i+1]->f);
		
		for(auto it=store.begin();it<store.end();it++)
			store[it]
	}*/

	/*for(int i=0;i<count;i++)
		code_word[code[i].ch]=code[i].word;*/
	//printing map
	/*for(auto it=code_word.begin();it!=code_word.end();it++)
		cout<<it->first<<"-->"<<it->second<<endl;*/
	//constructing compressed data in binary	
	/*for(int i=0;i<in.length();i++)
		out+=code_word[in[i]];
	int p;
	//cout<<out<<" "<<out.length()<<endl;
	for(p=0;p<out.length();p+=8)
	{
		if(p>out.length())
			break;
		string temp=out.substr(p,8);
		int num=stoi(temp,nullptr,2);
		//cout<<temp<<" "<<num<<endl;
		//write compressed string to output file.
		f2<<num;
	}*/

	return 0;
}

