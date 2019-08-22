#include<math.h>
#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define num_thread 100
long int numberPoint=0;
long int totalPoints=0;
void *count(void *threadid)
{
	int numberPoint=*((int*) threadid);
	int count=0;
	for(int i=0;i<numberPoint;i++)
	{
		double X=(double)rand()/RAND_MAX;
		double Y=(double)rand()/RAND_MAX;
		if((X*X+Y*Y)<=1)
		{
			count+=1;
		}
}
*((int*)threadid)=count;
 pthread_exit(NULL);
}
int main(int argc,char *argv[])
{
	clock_t start=clock();
	srand(time(NULL));
	pthread_t tid[num_thread];
	int counThread[num_thread];
	if(argc==2)
	{
		numberPoint=atoi(argv[1]);
		int pointPthread=numberPoint/num_thread;
		for(int t=0;t<num_thread;t++)
		{
		counThread[t]=pointPthread;
		}
		for(int t=0;t<num_thread;t++)
		{
		pthread_create(&tid[t],NULL,&count,(void*)&counThread[t]);
		}
		for(int t=0;t<num_thread;t++)
		{
		pthread_join(tid[t],NULL);
		}
		for(int t=0;t<num_thread;t++)
		{
		totalPoints+=counThread[t];
		}
		double pi=4.0*totalPoints/numberPoint;
		printf("%d pi %f\n",numberPoint,pi);
	}
	else
	{printf("Usage: ./pi.out <numIntervals> \n");}
	clock_t finish=clock();
	double dua=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("%f",dua);
}

