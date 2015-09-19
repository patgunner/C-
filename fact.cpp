#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n,num,arr[200],index=0,temp=0,x=0,i=0,t;

	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&n);
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
	for(i=index-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	}
}

