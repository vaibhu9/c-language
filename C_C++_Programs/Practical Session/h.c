#include<stdio.h>
int main()
{
	int a[10],i,len;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the values in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d ",&a[i]);
	}
	
	printf("%d",len);
	
	printf("\nYour Array is :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	
}
