#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	pid_t id1,id2,id3,id4,id5,id6,id7;
	id1=fork();
	if (id1==0)
	{
		printf("Id B %d  and parent  = %d\n",getpid(),getppid());
		id2=fork();
		if (id2==0)
		{
			printf("Id E%d and parent  = %d\n",getpid(),getppid());
			pid_t id3=fork();
			if (id3==0)
			{
				printf("Id I %d and parent = %d\n",getpid(),getppid());
			}
		}
		
		else if(id2>0)
		{
		id4=fork();	
			if (id4==0)
			printf("Id F %d and parent  = %d\n",getpid(),getppid());
		}
	}
	else if(id1>0)
	{
		printf("Id A %d and parent  = %d\n",getpid(),getppid());
		id5=fork();
		if (id5==0)
		{
			printf("Id C%d and parent  = %d\n",getpid(),getppid());
			id6=fork();
			if (id6==0)
			{
				printf("Id G %d and parent = %d\n",getpid(),getppid());
			}
		}
		else if(id5>0)
		{
		 id7=fork();     
			if (id7==0)
			{
				printf("Id D %d and parent  = %d\n",getpid(),getppid());
			}
		}
	}
	for(int i=0;i<7;i++)
		wait(NULL);
	return 0;
}
