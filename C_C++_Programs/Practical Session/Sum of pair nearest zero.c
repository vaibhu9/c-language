#include<stdio.h>
int main()
{
	int a[10],b[1],c[1],i,j,k,len,sum,temp,temp1,sum1;
	int a[]={1,2};
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	k=0;
	temp=100;
	temp1=-100;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			sum=a[i]+a[j];//   -2=44 + -46  
			
			if(sum<temp)  // -2<100
			{
				temp=sum;   // temp = -2
//				b[k]=a[i];
//				c[k]=a[j];
				if(sum<0) // -2<0
				{
					temp1=sum;  // temp1=-2
					b[k]=a[i];  //  b[0]=a[1]    b=[44]
					c[k]=a[j];  // c[0]=a[-51]
					
					
			  sum1=b[k]+(c[k]);// 44+ (-46)
				
					printf("%d            ",sum1);	
				
				}
			}
		}
	}
	
		printf("%d ",sum1);
	//printf("")
	
//	printf("\nThe pair of elements whose sum is minimum are : [%d,%d]",b[k],c[k]);
	
	return 0;
}
