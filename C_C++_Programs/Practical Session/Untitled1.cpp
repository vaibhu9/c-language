#include<stdio.h>
int i=0,j,temp,count=1;
void findoccuerence(int a[],int len)
{
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
		printf("\n%d ",a[i]);	
	}
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
}
int main()
{
	int a[7],i,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the values in array");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	findoccuerence(a,len);
	return 0;
}
