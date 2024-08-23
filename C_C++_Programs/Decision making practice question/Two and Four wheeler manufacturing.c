#include<stdio.h>
int main()
{
	int v,w,tw,fw;
	
	printf("Enter the number of vehicle for manufacture:\n");
	scanf("%d",&v);
	printf("Enter the total number of wheels:\n");
	scanf("%d",&w);
	
	if(v<=0||w<=0||w<v||w%2!=0)
	{
		printf("\nInvalid Input");
	}
	else
	{
		fw=(w-(2*v))/2;
		tw=v-fw;
		
		printf("\nThe total number of Two wheeler is : %d\nThe total number of Four wheeler is : %d",tw,fw);
	}
	return 0;
}
