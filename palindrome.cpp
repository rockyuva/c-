#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,c,len,temp =0;
	int flag =0;
	printf("enter your choice 1 or 2:");
	scanf("%d",&c);
	printf("enter any input:");
	scanf("%s",str);
	len =strlen(str);
	for(i =0;i<len;i++){
		if(str[i]!= str[len-i-1]){
			temp =1;
			break;
		}
	}
	if(c==1){
		if(temp ==0){
			printf("the given string is a palindrome");
		}else{
			printf("given string is not a palindrome");
		}
	}else{
		if(temp==0){
			printf("given number is a palindrome");
		}
		else{
			printf("given number is not a palindrome");
		}
	}return 0;
}
