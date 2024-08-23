#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,ci;
	printf("Enter the principle amount:\n");
	scanf("%f",&p);
	printf("Enter the time:\n");
	scanf("%f",&t);
	printf("Enter the rate:\n");
	scanf("%f",&r);
	ci=p*pow((1+(r/100)),t);
	printf("Compound Interest is: %.2f",ci);
	return 0;
}
