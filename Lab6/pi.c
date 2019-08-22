#include<math.h>
#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>
long int totalPoint=0;
long int numberPoint=0;
pthread_mutex_t lock;
void *count(void *X)
{
	for(int i=0;i<numberPoint;i++)
	{
		double X=(double)rand()/RAND_MAX;
		double Y=(double)rand()/RAND_MAX;
		if((X*X+Y*Y)<=1)
		{
			totalPoint++;
			pthread_mutex_unlock (&lock);
		}
	}
	return NULL;
}
int main(int argc,char *argv[])
{
	srand(time(NULL));
	pthread_t thread;
	if(argc==2)
	{
		numberPoint=atoi(argv[1]);
		pthread_create(&thread,NULL,&count,NULL);
		pthread_join(thread,NULL);
		double pi=4.0*totalPoint/numberPoint;
		printf("%d pi %f\n",numberPoint,pi);
		return 0;
	}
	else
		printf("Usage: ./pi.out <numIntervals> \n");

}
