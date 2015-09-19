#include<iostream>
#include<stdio.h>
 
using namespace std;
 
int main()
{
	int n,k,i,count=0;
	int num;
	
	scanf("%d %d",&n,&k);
 
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(num%k==0)
		count++;
	}
	printf("%d",count);
}
 
