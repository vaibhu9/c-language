#include<stdio.h>
int main()
{
	int i,j,num;
	
	for(i=1;i<=5;i++)
    {
        num=i;
             	
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i)
			{	
				printf("%d ",num);
				
				if(j<5)
				{		
					num++;
				}
				else
				{
					num--;
				}
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
