#include<stdio.h>
int main()
{
	int a=6,b;
	b=a>6&&++a;
	printf("A=%d\tB=%d",a,b);
	return 0;
}
