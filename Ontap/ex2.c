#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
       int pid1=fork();
       int pid2;
if(pid1==0)
{
printf("[1] pid of child  %d of parent  %d\n",getpid(),getppid());	
}
else 
{
	pid2=fork();
	if(pid2==0){
	printf("[2] pid of child  %d of parent pid %d\n",getpid(),getppid());
	}
	else
	{
		printf("PID of parent %d\n",getpid());
	}

}
}


