#include<stdio.h>
#include<fstream>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

int gc=0;

struct var
{
	int cnt;
	char c;
	var *next;
}*v=NULL,*temp,*tmp;

struct arr
{
	int acnt;
	char ac;
	vector<char> vec;
}*a;

void insert(char ch)
{
	int f=0;
	if(v==NULL)
	{
		v=new var;
		v->next=NULL;
		v->c=ch;
		v->cnt=1;
		gc++;
	}
	else
	{
		temp=v;
		while(temp!=NULL)
		{
			if(temp->c==ch)
			{
				temp->cnt++;
				f=1;
			}
			temp=temp->next;
		}
		if(f==0)
		{
			tmp=new var;
			tmp->c=ch;
			tmp->cnt=1;
			tmp->next=v;
			v=tmp;
			gc++;
		}

	}
		
}


void divide(int st,int end)
{	
	int i,j,sum=0,temp=0;
	if(st==end)
		return;
	for(i=st;i<=end;i++)
		sum+=a[i].acnt;
	sum/=2;
	//cout<<sum<<endl;
	i=st;
	while(sum>=0)
	{
		temp+=a[i].acnt;
		if(temp>=sum)
			break;
		i++;
	}
	for(j=st;j<=i;j++)
	a[j].vec.push_back('0');
	for(j=i+1;j<=end;j++)
	a[j].vec.push_back('1');
	divide(st,i);
	divide(i+1,end);
}

void swap(var *t1,var *t2)
{
	char tempc;int tempcnt;
	tempc=t1->c;
	t1->c=t2->c;
	t2->c=tempc;

	tempcnt=t1->cnt;
	t1->cnt=t2->cnt;
	t2->cnt=tempcnt;

}

void sort()
{
	tmp=v;
	int i,j;
	for(i=0;i<gc-1;i++)
	{
		for(j=0;j<gc-i-1;j++)
		{
			if((tmp->cnt)<int(tmp->next->cnt))
			swap(tmp,tmp->next);
			tmp=tmp->next;	
		}
		tmp=v;
	}
}


void dispv()
{
	for(int i=0;i<gc;i++)
	{
		for(int j=0;j<a[i].vec.size();j++)
				cout<<a[i].vec[j];

		cout<<endl;

	}
}

int main(int argc, char**argv)
{
	char data[60000];
	ofstream f2("final.txt");
	int i=0,j,k;
	string out;
		vector<char> final;
	
	fstream f1;
	f1.open(argv[1],ios::in);

	while(!f1.eof())
	{
		if(f1.eof())
			break;
		f1.get(data[i]);
		i++;
	}

	f1.close();
	printf("%s\n",data);
	int len=i;
	i=0;
	while(i<len-1)
	{
		insert(data[i]);
		i++;
	}
	sort();
	a=new arr[gc];
	
	for(i=0,tmp=v;i<gc;i++,tmp=tmp->next)
	{
		a[i].acnt=tmp->cnt;
		a[i].ac=tmp->c;
		//printf("%c \t %d\n",a[i].ac,a[i].acnt);
	}

	divide(0,gc-1);
	dispv();

	int st=0;
	//cout<<endl;
	for(i=0;i<len;i++)
	{
		for(j=0;j<gc;j++)
			if(a[j].ac==data[i])
			{
					for( k=0; k<a[j].vec.size(); k++)
					{
						out+=a[j].vec[k];
						//final.push_back(a[j].vec[k]);
						//cout<<out[st++];
					}

			}
		//cout<<endl;
			
	}

	//cout<<out<<endl;
	for(int p=0;p<out.length();p+=8)
	{
		if(p>out.length())
			break;
		string temp=out.substr(p,8);
		int num=stoi(temp,nullptr,2);
		//cout<<temp<<" "<<num<<endl;
		//write compressed string to output file.
		f2<<char(num);
	}
	/*for(i=0;i<gc;i++)
		for(j=0;j<a[i].vec.size();j++)
		{
			if(a[i].vec[j])
		}*/
	//printf("%s",data);


	//sort(temp,temp+len);
	
	/*i=0;
	char ch=temp[0];
	while(i-1<len)
	{
		if(temp[i]!=ch)
		{
			tmp=new var;
			tmp->cnt=count;
			tmp->c=temp[i];	
			insert(tmp);
			count=1;
			i++;
			v++;
		}
		count++;
	}*/


	//cout<<"Yes";
	//disp(v);
	
	f2.close();
	return 0;

}
