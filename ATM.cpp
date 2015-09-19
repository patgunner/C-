#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
	float x;
	float y;
	cin>>x>>y;
	
	if((x+0.5<y) && fmod(x,5)==0)
	cout<<setprecision(2)<<fixed<<(y-x-0.50);
	else
	cout<<setprecision(2)<<fixed<<y;

	return 0;
}
