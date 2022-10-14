#include<iostream>
using namespace std;
class area1
{
	int l,b,s;
	public:
		void area(int i,int b);
		void area(int s);
};
void area1::area(int i,int b)
{
	int x;
	cout<<"len nd br"<<x;
	cin>>l>>b;
	x=l*b;
	cout<<"area of rec"<<x;
}
void area1::area(int s)
{
	int y;
	cout<<" enter the s";
	cin>>s;
	y=s*s;
	cout<<"area of square ;"<<y;
}
int main()
{
	int l,b,s;
	area1 m;
	m.area(l,b);
	m.area(s);
	
}
