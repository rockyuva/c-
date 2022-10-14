#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,s=0,i=1;
	cout<<"enter the number:";
	cin>>a;
	while(i<a)
	{
		if(a%i==0)
		s=s+i;
		i++;
	}
	if(s==a)
	{
		cout<<"perfect number";
	}
	else
	{
		cout<<" not perfect number";
	}
	return 0;
}
