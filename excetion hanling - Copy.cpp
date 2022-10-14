#include<iostream>
using namespace std;
int main()
{ 
   try
  {
    	int age =15;
	 if (age>=18)
	 {
		std::cout<<"access granted";
	 }
	else
	 {
		throw(age);	
     }
  }
  catch(int mynum)
  {
       std::cout<<"access deneid";
	   std::cout<<"  age"<<mynum;
   }
     return 0;
}
