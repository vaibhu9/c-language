#include<stdio.h>
#include<math.h>
int main()
{
	int n,p,p1,ld,fd,mn,r,temp,swaped,digits=0,mre=0;
	printf("Enter the number :\n");
	scanf("%d",&n);
	
	temp=n;
	do
	{
		n=n/10;
		++digits;
	}while(n!=0);
	printf("Total digits is : %d\n",digits);
	
	n=temp;
	
	ld=n%10;
	printf("last number : %d",ld);
	
	p=pow(10,--digits);
	fd=n/p;
	printf("\nfirst number : %d",fd);
	
	n=n/10;
	
	p1=pow(10,--digits);
	mn=n%p1;
	printf("\nmiddle number : %d",mn);
	
	do
	{
		r=mn%10;
		mn=mn/10;
		mre=mre*10+r;
	}while(mn>0);
	printf("\nMiddle swaped number is : %d\n",mre);
	
	swaped=(fd*p)+(mre*10)+ld;
	printf("\nMiddle digits swaped number is : %d",swaped);
}
