#include <stdio.h>
#include "sub.h"
#include "sum.h"
int main()
{
	int a,b;
	printf("nhap so thu nhat");
	scanf("%d",&a,"\n");
	printf("nhap so thu hai");
	scanf("%d",&b,"\n");
	printf("a-b=%d",sub_number(a,b),"\n");
	printf("a+b=%d",sum_number(a,b),"\n");
	return 0;
}

