#include"findsubstr.h"
#include"readline.h"
#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	char sub[100],str[100];
        printf("Substr: ");
	fgets(sub,100,stdin);
	printf("input string:\n ");
	while(read_line(str)!=-1)
	{
	if(find_sub_string(str,sub)!=-1)
		printf("line contains :%s\n",str);	
	}
     return 0;
}
