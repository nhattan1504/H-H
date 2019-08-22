
#include<stdio.h>
#include"findsubstr.h"
#include<string.h>
int find_sub_string(const char *str,const char *sub)
{
	int lenghstr,lenghsub;
	lenghstr=strlen(str)-1;
	lenghsub=strlen(sub)-1;
	if(lenghstr<lenghsub)
		return -1;
	else
	{
		for(int i=0;i<lenghstr-lenghsub;i++)
		{
			int j=0;
			while(j<lenghsub)
			{
				if(str[i+j]==sub[j])
			        	j++;
				else 
					break;
			}
			return i;
		}
	}

}
