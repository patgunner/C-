#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t,n,m,i;
	scanf("%d",&t);
	
	while(t--)
	{
		bool ans=true;
		scanf("%d %d",&m,&n);
		int man[m],girl[n];

		for(i=0;i<m;i++)
		scanf("%d",&man[i]);
		
		for(i=0;i<n;i++)
		scanf("%d",&girl[i]);
		
		
		sort(man,man+m);
		sort(girl,girl+m);

		for(i=0;i<m;i++)
		printf("%d\t",man[i]);
		
		cout<<endl;
		for(i=0;i<m;i++)
		printf("%d\t",girl[i]);
		
		
		for(i=0;i<m;i++)
		{
			if(man[i]<girl[i])
			{
				ans=false;
				break;
			}
			
		}
		if(ans==true)
		printf("YES\n");
		else
		printf("NO\n");
	}
	
    return 0;
    
}
