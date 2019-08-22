#include"readline.h"
#include<stdio.h>
#include<string.h>
int read_line(char *str)
{
	fgets(str,100,stdin);
	if(strlen(str)-1!=0)
	{
		return strlen(str)-1;
	}
	return -1;
}
