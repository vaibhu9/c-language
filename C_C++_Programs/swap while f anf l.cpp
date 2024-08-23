#include<stdio.h>
main()
{
	int n,f,l,mid,count=0,t,b,m=1;
	printf("\nEnter the number :\n");
	scanf("%d", &n);
	
	b=n;
	t=n;
	
	while(n>0)
	{
		count++;
		n=n/10;
	}
	printf("\nNumber of digits = %d",count);
	f=n;
	while(t>0);
	{
		m=m*10;
		l=t%10;
		t=t/10;
	}
	m=m/10;
	
	//l=t%10;
//	f=t/m;
	mid=(t%m)/10;
	printf("\nfirst digit = %d \nmid = %d \nlast=%d",f,mid,l);
	
	t=l*m+mid*10+f;
	
	printf("\nBefore Swap = %d\nAfter Swap = %d",b,t);
	return 0;	
}
