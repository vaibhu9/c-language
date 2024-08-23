
#include<stdio.h>

int main()
{
	int a[9]={1,2,3,4,5,6,7,8,9};
	int len,i;
	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",a[i]);
		}
	}
	
	return 0;
}
