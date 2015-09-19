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

bool cmp(alpha a,alpha b)
{
	return a.f>b.f;
}


void partition(int low,int high)
{
	
	if(low==high)
		return;
	int sum=0;
	for(int i=low;i<=high;i++)
		sum+=code[i].f;
	sum/=2;
	int ind=low,temp=0;
	while(sum>=0)
	{
		temp+=code[ind].f;
		if(temp>=sum)
			break;
		ind++;
	}
	
	for(int i=low;i<=ind;i++)
		code[i].word.push_back('0');
	for(int i=ind+1;i<=high;i++)
		code[i].word.push_back('1');
	partition(low,ind);
	partition(ind+1,high);
}
	
int main()
{
	ifstream f1("input");
	ofstream f2("out");
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
	//partition function to generate code word.
	partition(0,count-1);
	//adding to another map		
	for(int i=0;i<count;i++)
		code_word[code[i].ch]=code[i].word;
	//printing map
	/*for(auto it=code_word.begin();it!=code_word.end();it++)
		cout<<it->first<<"-->"<<it->second<<endl;*/
	//constructing compressed data in binary	
	for(int i=0;i<in.length();i++)
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
	}
	return 0;
}

