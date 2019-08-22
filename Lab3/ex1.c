#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define  MAX 1000
int main()
{
	int d=0,d1=0,dem=0;
	int a[MAX];
	int pid=fork();
	FILE*file=fopen("numbers.txt","r");
	int i=0;
	fscanf(file,"%d",&a[i]);
	while(!feof(file))
	{
		i++;
		dem++;
		fscanf(file,"%d",&a[i]);
	}
	fclose(file);
	if(pid==0)
	{
		for(int k=0;k<dem;k++)
		{if(a[k]%3==0)
			{d1++;
			}
		}
		 printf("%d",d1);
	}
	else
	{
	       	for(int j=0;j<dem;j++)
		{
			if(a[j]%2==0)
			{
				d++;
			}
                }
		 printf("%d \n",d);
	}
	return 0;
}



