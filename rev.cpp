#include<iostream>
using namespace std;
void reverse(string str)
{
	int len=str.length();
	int n=len;
	while(n--)
	{
		cout<<str[n];
	}
}
int main(void)
{
	string s="vamsi";
	reverse(s);
	return 0;
	
 } 
