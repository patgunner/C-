#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	long long n,num,arr[2000],index=0,temp=0,x=0,i=0,t;

	scanf("%lld",&t);
	while(t--)
	{
	scanf("%lld",&n);
	num=n;
	index=0;temp=0;x=0;i=0;
	if(n==1)
	{
		printf("1\n");
		continue;
	}
	while(n>0)
	{
		arr[i++]=n%10;
		n/=10;
	}
	num--;
	
	while(num>=1)
	{
		index=0;
		while(index<i)
		{
			x=arr[index]*num + temp;
			arr[index]=x%10;
			temp=x/10;
			index++;
		}
		while(temp>0)
		{
			arr[index++]=temp%10;
			temp/=10;
		}
		i=index;
		num--;
	}
	printf("%lld\n",index );
	}
}

