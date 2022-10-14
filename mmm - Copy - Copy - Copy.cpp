#include<iostream>
using namespace std;
class college
{
	public:
	void a()
	{
		cout<<'a';
	}
};
class sem:public college
{
	public:
	void b()
	{
		cout<<'b';
	}
};
class marks:public college,public sem
{
	public:
		void c()
		{
			cout<<'c';
		}
};
int main()
{
	marks b1;
	b1.a();
	b1.b();
	b1.c();
	return 0;
	
}
