//WAP to print all prinme numbers from 1 to n by using do-while loop.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i=1,n,j,flag;
	printf("Enter the limit :\n");
	scanf("%d",&n);
	do{
			flag=1;
			j=2;
			while(j<=i/2)
			{
				if(i%j==0)
				{
					flag=0;
					break ;
				}
				j++;
			}
			if(flag)
			{
				printf("%d ",i);
			}
			i++;
	  }while(i<=n);
	  
	  return 0;
}
*/

//==================================================================================================================
//WAMDP (switch case).
//==================================================================================================================


#include<stdio.h>
int main()
{
	int o,ch,n,i,f1,f2,fib,p,p1,ld,fd,mn,r,temp,swaped,digits,mre;
	printf("1. Print all alphabets in capital letter.\n2. Print ASCII character from 0 to 255.\n3. Swap middle number.(reverse middle number rather than first and last digit).\n4. Print fibonacci series from 1 to n.\n\n");
	printf("Enter the operation number :\n");
	scanf("%d",&o);
	
	switch(o)
		{
			case 1: 
					ch=65;
					do
					{
						printf("%c ",ch++);
					}while(ch<=90);
					break;
			
			case 2:
					ch=0;
					do
					{
						printf("%c ",ch++);
					}while(ch<=255);
					break;
			
			case 3:
					digits=0,mre=0;
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
					
					break;
			
			case 4:
					i=0,f1=0,f2=1,fib=0;
					printf("Enter the limit :\n");
					scanf("%d",&n);
					do
					{
						printf("%d ",fib);
						fib=f1+f2;
						f1=f2;
						f2=fib;
						i++;
					}while(i<=n);
					break;
			
			default : printf("Invalide Input");
		}
		return 0;
}
