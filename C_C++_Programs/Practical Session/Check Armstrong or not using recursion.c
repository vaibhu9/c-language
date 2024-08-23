//Wap to check armstrong or not using recursion.

#include<stdio.h>

int rem,count=0,p,i,temp,sum=0;
int checkArmstrong(int num)
{
	temp=num;
	while(num>0)
	{
	    num=num/10;
		count++;
	}
    num=temp;
	while(num!=0)
	{
	    rem=num%10;
		p=1;
	    i=1;
	    while(i<=count)
		{
	    	p=p*rem;
	    	i++;
		}
	    sum=sum+p;
	    num=num/10;
	}
    if(sum==temp)
	{
	    printf("\n%d It is Armstrong number.",temp);
	}
    else
	{
	    printf("\n%d It is not Armstrong number.",temp);
	}
}

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	checkArmstrong(n);
	
	return 0;
}


