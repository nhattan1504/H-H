
#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("hi all\n");
	int id=fork();
	printf("My value: %d\n",id);
	return 0;
}
