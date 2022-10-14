#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number:";
	cin>>a;
	if(int(a))
	{
		if(a%2==0)
	{
		cout<<"even:"<<a;
	}
	else
	{
		cout<<"odd"<<a;
	}
}
else
{
	cout<<"invalid";
}
return 0;
}
