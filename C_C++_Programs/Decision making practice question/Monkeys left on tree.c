#include<stdio.h>
int main()
{
	int n,k,j,m,p;
	float atebanana=0.0,atepeanut=0.0;
	printf("Enter n,k,j,m,p");
	scanf("%d%d%d%d%d",&n,&k,&j,&m,&p);
	
	if(n<0 || k<0 || j<0 || m<0 || p<0)
	{
		printf("Invalid Input");
	}
	else
	{
		if(k>0)
		atebanana=m/k;
		if(j>0)
		atepeanut=p/j;
		n=n-atebanana-atepeanut;
		printf("Number of monkeys left on the tree: %d",n);
		   
	}
	return 0;
}
