#include <stdio.h>
#include <pthread.h>
void *threadFunc(void *arg)
{
	char *str;
	int i = 0;

	str=(char*)arg;

	while(i < 10 )
	{
	
		printf("threadFunc says: %s\n",str);
		++i;
	}

	return NULL;
}

int main(void)
{
	pthread_t pth;	
	int i = 0;


	
	pthread_join(pth, NULL);

	while(i < 10 )
	{
		
		printf("main() is running...\n");
		++i;
	}

	return 0;
}

