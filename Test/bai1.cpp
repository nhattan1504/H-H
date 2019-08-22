#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

#define A 0.5556
#define B 32
float f;
double c;


int main() {
	printf("Nhap vao do F: ");
	scanf("%f", &f);
	printf("Nhiet do trong thang do F: %.2f\n", f);
	c = A * (f - B);
	printf("Nhiet do trong thang do C: %.2f\n", c);
	system("pause");
}

