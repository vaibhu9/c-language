#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],i,j,k,l,len1,len2,len3,temp;
	
	len1=sizeof(a)/sizeof(a[0]);
	len2=sizeof(b)/sizeof(b[0]);
	len3=sizeof(c)/sizeof(c[0]);
	
	printf("Enter elements in first array :\n");
	for(i=0;i<len1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter elements in second array :\n");
	for(j=0;j<len2;j++)
	{
		scanf("%d",&b[j]);
	}
	
	i=0;
	j=0;
	for(k=0;k<len3;k++)
	{
		if(i<len1)
		{
			c[k]=a[i++];
		}
		else
		{
			c[k]=b[j++];
		}
	}
	
	printf("\nThird array :\n");
	for(k=0;k<len3;k++)
	{
		printf("%d ",c[k]);
	}
	
	for(k=0;k<len3;k++)
	{
		for(l=k+1;l<len3;l++)
		{
			if(c[k]<c[l])
			{
				temp=c[k];
				c[k]=c[l];
				c[l]=temp;
			}
		}
	}
	
	printf("\n\nThird merged and sorted in descendin order array is :\n");
	for(k=0;k<len3;k++)
	{
		printf("%d ",c[k]);
	}
	
	return 0;
}
