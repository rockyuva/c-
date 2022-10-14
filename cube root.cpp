#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b;
	cout<<"enter the number:";
	cin>>a;
	if(a<=0)
	{
		cout<<"enter a valid number";
	}
	else
	{
		b=cbrt(a);
		cout<<"cube root:"<<b;
		return 0;
	}
}
