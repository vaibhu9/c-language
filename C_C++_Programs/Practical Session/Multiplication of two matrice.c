//WAP to multiplication of two square matrices.

#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j,k,sum;
	
	printf("Enter the elements in 1st matrice :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter the elements in 2st matrice :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nMultiplication of two matrice :\n");
	sum=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			printf("%4d",sum);
			sum=0;
		}
		printf("\n");
	}
	
	return 0;
}


