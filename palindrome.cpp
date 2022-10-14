#include<iostream>
using namespace std;
int main()
{
	int n ,digit,num,rev=0;
	cout<<"enter the positive number: ";
	cin>>num;
	n = num;
	do
	{
		digit = num % 10;
		rev = (rev*10) + digit;
		num = num / 10;
	}
	while(num != 0);
	cout<<"the reverse number is :"<<rev<<endl;
	  if(n == rev)
	  cout<<"the number is a palindrome. ";
	  else
	  cout<<"the numgeris a not a plindrome.";
	  return 0;
}
