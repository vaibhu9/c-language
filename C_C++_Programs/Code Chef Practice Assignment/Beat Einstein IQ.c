#include<stdio.h>
int main()
{
	int IIQ,InsIQ=7,EIQ=170,FIQ;
	
	printf("Enter the chef IQ level before playing musical instrument\n");
	scanf("%d",&IIQ);
	
	FIQ=IIQ+InsIQ;
	
	if(IIQ>=100&&IIQ<=169)
	{
	    if(FIQ>EIQ)
	    {
	    	printf("\nYes");
	    }
	    else
	    {
		    printf("\nNo");
	    }
    }
    else
    {
    	printf("\nChef can't beat Einsteins IQ");
	}
	return 0;
}
