#include<iostream>
using namespace std;
void area(int b,int h)
{
    int w;
	w=0.5*b*h;
	cout<<w<<endl;
}
void area(float r)
{
	int m;
	m=(3.14)*r*r;
	cout<<m<<endl;
}
void area(int a)
{
	int x;
	x=a*a;
	cout<<x<<endl;
}
void area(float u,float e)
{
	int k;
	k=u*e;
	cout<<k<<endl;
}
int main()
{
	int a=3,b=7,h=4,r=6,u=3,e=9;
	area(b,h);
	area(a);
	area(r);
	area(u,e);
}
