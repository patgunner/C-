//program:-huffman coding(data compression practical 2).
#include<bits/stdc++.h>
using namespace std;
#define max 256
struct nstruc
{
	char ch;
	int f;
	nstruc *left,*right;
	string s;
}*root=NULL,code;


struct comp
{
	bool operator()(nstruc a,nstruc b)
	{
		return 	a.f>b.f;
	}
};

priority_queue <nstruc,vector<nstruc>,comp> Q;
map<char,string> mp;
vector<nstruc> tr;


bool cmp(nstruc a,nstruc b)
{
	return a.f<b.f;
}

void make_tree()
{
	while(Q.size()>1)
	{
		nstruc *temp1=new nstruc;
		nstruc *temp2=new nstruc;
		*temp1=Q.top();
		Q.pop();
		*temp2=Q.top();
		Q.pop();
		nstruc *temp=new nstruc;
		temp->ch='*';
		root=temp;
		temp->f=temp1->f+temp2->f;
		temp->left=temp1;
		temp->right=temp2;
		Q.push(*temp);
	}
}

void generate_code(nstruc *temp,string str)
{
	if(temp==NULL)
		return;
	generate_code(temp->left,str+"0");
	if(temp->ch!='*')
	{
		temp->s=str;
		mp[temp->ch]=str;
	}
	generate_code(temp->right,str+"1");
}


int main(int argc,char **argv)
{
	ifstream f1(argv[1]);
	fstream f2("out",fstream::out);
	string in,out;
	string s;
	while(getline(f1,s))
		in+=s;
	map<char,int> temp;
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
			code.ch=it->first;
			code.f=it->second;
			Q.push(code);
			count++;
	}
	make_tree();
	generate_code(root,"");
	for(int i=0;i<in.length();i++)
	{
		out+=mp[in[i]];
	}

	for(map<char,string>::iterator im=mp.begin();im!=mp.end();++im)
	{
		cout<<im->first<<"\t"<<im->second<<endl;
	}

	
	int p;
	
	for(p=0;p<out.length();p+=8)
	{
		if(p>out.length())
			break;
		string temp=out.substr(p,8);
		int num=stoi(temp,nullptr,2);
		//write compressed string to output file.
		f2<<char(num);
	}	
	return 0;
}

