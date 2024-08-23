#include<stdio.h>
int main()
{
	int i,j,num=1,k=1,flag;
	
	for(i=1;i<=8;i++)
	{
		flag=1;
		if(i==5)
		{
			num=4;
		}
		for(j=1;j<=7;j++)
		{
			if( i<5 && j<=(i*2)-1  ||  i>4 && j<=17-(i+k) )
			{
				if(flag)
				{
					printf("%d",num);
					flag=0;
				}
				else
				{
					printf("*");
					flag=1;
				}
			}
		}
		printf("\n");
		k++;
		(i<4)?num++:num--;
	}
	return 0;
}
