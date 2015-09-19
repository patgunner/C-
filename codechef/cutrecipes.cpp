#include<iostream>
#include<stdio.h>

using namespace std;

int gcd(int a,int b)
{
	int temp=b;
	/*if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}*/

	while(b>0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;

}

int main()
{
	int t,n,i;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%d",&n);
		int arr[n];
		for (i = 0; i < n; ++i)
			scanf("%d",&arr[i]);

		int result=arr[0];
		for ( i = 1; i < n; ++i)
		{
			/* code */
			result=gcd(result,arr[i]);

		}

		for( i=0; i<n; i++)
		{
			arr[i]/=result;
			printf("%d ",arr[i] );
		}
		printf("\n");
	}


	return 0;
}
