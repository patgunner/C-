#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

void multset(bool arr[],long long int a, long long int n)
{
	long long int i=2,num;
	while( (num=i*a)<=n)
	{
		arr[num-1]=1;
		i++;
	}	
}
void sieve(bool arr[])
{
	for(long long int i=1;i<32000;i++)
	{
		if(arr[i]==0)
		{
			printf("%lld \n",i+1);
			multset(arr,i+1,32000);
		}
	}
}

void check()

int main()
{
	int t,k=0;
	long long int m[10],n[10],i,j;
	bool arr[32000];
	memset(arr,0,sizeof(arr));
	sieve(arr);
	scanf("%d",&t);

	
	while(t--)
	{
		scanf("%lld %lld",&m,&n);
		if(m==1)
		m=2;
		while(m<=n)
		{
			check()	 
		k++;
		printf("\n");
	}

	/*for(i=0;i<100;i++)
	printf("%d",arr[i]);
	return 0;*/

		
	
}
