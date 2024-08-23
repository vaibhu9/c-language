#include<stdio.h>
int main()
{
	int a[10],e[10],o[10],i,j,k,len,le=0,lo=0;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	j=0;
	k=0;
	for(i=0;i<len;i++)
	{
		if(a[i]%2==0)
		{
			e[j++]=a[i];
			le++;
		}
		else
		{
			o[k++]=a[i];
			lo++;
		}
	}
	
	printf("\nEven integer array :\n");
	for(j=0;j<le;j++)
	{
		printf("%d ",e[j]);
	}
	
	printf("\n\nOdd integer array :\n");
	for(k=0;k<lo;k++)
	{
		printf("%d ",o[k]);
	}
	
	return 0;
}

