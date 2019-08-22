#include<stdio.h>
#include<pthread.h>
int *shared_data=0;
void *mythread(void *arg)
{
	for(int i=0;i<100000000;i++)
	{
		shared_data++;
	}
}
int main()
{
pthread_t t1, t2;
pthread_create(&t1, NULL, mythread, NULL);
pthread_create(&t2, NULL, mythread, NULL);
pthread_join(t1, NULL); pthread_join(t2, NULL);
printf("The value of shared_data: %d\n", shared_data);
}
