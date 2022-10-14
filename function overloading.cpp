#include<iostream>
using namespace std;
class go
{
	int a,b,e,c;
	float d,f;
	public:
		void getdata();
		void putdata();
};
void go::getdata()
{
	cout<<"enter a,b,e values";
	cin>>a>>b>>e;
	cout<<"enter d value";
	cin>>d;
}
void go::putdata()
{
	 void sum(int a,int b);
	{
		int c=a+b;
		cout<<c<<endl;
	}
	void sum(float d,int e);
	{
	float f=d+e;
	cout<<f;
    }

}

int main()
{
	go h;
	h.getdata();
	h.putdata();
}

