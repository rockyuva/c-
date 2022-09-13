#include<iostream>
using namespace std;
class student
{
	int  arg,i,sum,mark1,mark2,mark3;
	public:
	void data();
	void grade();
};
void student::data()
{
	for(i=0;i>3;i++)
	cout<<"enter";
	cin>>mark1>>mark2>>mark3;
}
void student::grade()
{
	sum=mark1+mark2+mark3;
	arg=sum/3;
	cout<<"sum of mark"<<sum;
	cout<<"arg of mark"<<arg;
}
int main()
{
	student s;
	s.data();
	s.grade();
	return 0;
}
