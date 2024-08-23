#include<stdio.h>
int main()
{
	// Wap to All Armstrong num print
	int num=1,limit,rem,count=0,p,i,temp,sum=0,flag=0;
	printf("Enter the limit :\n");
	scanf("%d",&limit);
	
	while(num<=limit)
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
//	    (sum==temp)?flag=1:flag=0;
	    if(sum==temp)
	    {
		    flag=1;
	    }
	    else
	    {
		    flag=0;
	    }
	    if(flag)
	    {
	    	printf("%d\t",sum);
	    }
	    num++;
    }
    return 0;
}
    
    
