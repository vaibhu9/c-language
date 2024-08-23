#include<stdio.h>
#include<math.h>
int main()
{
	int n,o,r,rn=0,i=0,sum=0,first,last,mid,temp,p,p1,swap;
	
	printf("Enter the number :\n");
	scanf("%d",&n);
	printf("\n1) Reverse number\n2) Count digit\n3) Calculate sum of digits\n4) Calculate sum of ony even numbers from digits\n5) swap first and last digit of number\n");
	printf("\nEnter the operation number :\n");
	scanf("%d",&o);
	temp=n;
	switch(o)
	{
		case 1://Reverse the number
	        	while(n>0)
		        {
		            r=n%10;
		            n=n/10;
		            rn=rn*10+r;
	            }
	            printf("\nReversed number is = %d",rn);
	            
	            break;
	    
		case 2://Count digits
		        while(n>0)
				{
					n=n/10;
					i++;
			    }
				printf("Total number of digits is = %d",i);
				
				break;
				      
		 case 3://Calculate sum of digits
		         while(n>0)
		         {
		         	r=n%10;
		         	n=n/10;
		         	sum=sum+r;
				 }
				 printf("Sum of total digits is = %d",sum);
				 
				 break;
		 
		 case 4://Calculate sum of only even digits from number
		         while(n>0)
				 {
				 	r=n%10;
				 	if(r%2==0)
				 	{
				 		sum=sum+r;
					}
					n=n/10;
		   	     }		 
		   	     printf("Sum of all even digits is = %d",sum);
		   	     
		   	     break;
		 
		 case 5://Swap first and last digit of number
		         temp=n;                         //temp=12345
				 while(n>0)
				 {
				 	++i;                         //i=5
				 	n=n/10;
				 }	     
				 n=temp;                         //n=12345
				 
				 last=n%10;                      //last=5
				 p=pow(10,--i);                  //p=pow(10,4)=10000
				 first=n/p;                      //first=12345/10000=1
				 p1=pow(10,--i);                 //p1=pow(10,3)=1000
				 n=n/10;                         //n=12345/10=1234
				 mid=n%p1;                       //mid=1234%1000=234
				 swap=last*p+mid*10+first;       //swap=5*10000+234*10+1=50000+2340+1=52340+1=52341
				 printf("After swap = %d",swap); //52341
	}
	return 0;
	
}
