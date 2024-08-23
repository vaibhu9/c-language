#include<stdio.h>
int main()
{
	int a[10],i,j,len,temp,count;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<len;i++)
	{
        for(j=i+1;j<len;j++)
        {
	  		if(a[i]>a[j])
          	{
          		temp=a[i];
          		a[i]=a[j];
          		a[j]=temp;
			}
		}

	}

	printf("\nSorted array in decending order :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nOccurrence of elements in array :");
	count=1;
	for(i=0;i<len;i++)
	{
		if(a[i]==a[i+1])
		{
			count++;
		}
		else
		{
			printf("\n%d=====>%d",a[i],count);
			count=1;
		}
	}

	return 0;
}
