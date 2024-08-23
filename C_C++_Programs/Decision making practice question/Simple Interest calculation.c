#include<stdio.h>
int main()
{
	float p,t,r,si;
	printf("Enter the principle amount:\n");
	scanf("%f",&p);
	printf("Enter the time:\n");
	scanf("%f",&t);
	printf("Enter the rate:\n");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("Simple Interest is: %.2f",si);
	return 0;
}
