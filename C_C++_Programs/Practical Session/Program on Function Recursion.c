//==========================================================================================================
//Q.1) Program to print an array
//==========================================================================================================

/*
#include<stdio.h>
int i=0;
void arr(int a[],int len)
{
	if(i<len)
	{
		printf("%d ",a[i++]);
	}
	
	arr(a,len);

}

int main()
{
	int a[10],i,len;

	len=sizeof(a)/sizeof(a[0]);

	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nYour array is : ");
	arr(a,len);
}
*/

//==========================================================================================================
//Q.2) Program to print an array in reverse order
//==========================================================================================================

/*
#include<stdio.h>

//int i=0;
//void arr(int a[],int len)
//{
//	if(i<len)
//	{
//		printf("%d ",a[i++]);
//	}
//	arr(a,len);
//}

int i=0;
void revarr(int a[],int len)
{
	if(i<=len/2)
	{
		int temp=a[i];
		a[i]=a[len-1-i];
		a[len-1-i]=temp;
	}
	if(i<len)
	{
		printf("%d ",a[i++]);
	}
	
	revarr(a,len);
}

int main()
{
	int a[10],i,len;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nGiven array is : ");
//	arr(a,len);
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nReversed array is : ");
	revarr(a,len);
}
*/

//==========================================================================================================
//3) Program to calculate sum of an array
//==========================================================================================================

/*
#include<stdio.h>
int sum=0,i=0;
int sumarr(int a[],int len)
{
	if(i<len)
	{
		sum=sum+a[i++];
		sumarr(a,len);
	}
	
	return sum;
}

int main()
{
	int a[10],i,len,sum;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nGiven array is : ");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	sum=sumarr(a,len);
	printf("\nSum of total elements in array are : %d",sum);
	
	return 0;
}
*/

//==========================================================================================================
//4) Program to calculate average of an array
//==========================================================================================================

/*
#include<stdio.h>
int sum=0,i=0;
int avgarr(int a[],int len)
{
	if(i<len)
	{
		sum=sum+a[i++];
		avgarr(a,len);
	}
	int avg=sum/len;
	return avg;
}

int main()
{
	int a[10],i,len,avg;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nGiven array is : ");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	avg=avgarr(a,len);
	printf("\nAverage of array are : %d",avg);
	
	return 0;
}
*/

//==========================================================================================================
//5) Program to find the largest element of an array
//==========================================================================================================

/*
#include<stdio.h>
int i=0,larg=0;
int largarr(int a[],int len)
{
	if(i<len)
	{
		if(a[i]>larg)
		{
			larg=a[i];
		}
		i++;
		largarr(a,len);
	}
	return larg;
}

int main()
{
	int a[10],i,len,larg;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nGiven array is : ");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	larg=largarr(a,len);
	printf("\nLargest element in array is : %d",larg);
	
	return 0;
}
*/

//==========================================================================================================
//6) Program to find the second largest element of an array
//==========================================================================================================

/*
#include<stdio.h>

int i=0,j,flag=0;
int findSecLarg(int a[],int len)
{
	if(i<len)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[j]<a[i])
			{
				printf("%d",a[j]);
				flag=1;
				break;
			}
		}
		if(flag)
		{
			i=i+len;
		}
		i++;
		findSecLarg(a,len);
	}
	
}

int main()
{
	int a[6],i,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[j]>a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nSecond largest elements in array is : ");
	findSecLarg(a,len);	
	
	return 0;
}
*/

//==========================================================================================================
//7) Program to find the smallest element of an array
//==========================================================================================================

/*
#include<stdio.h>

int i=0,temp;
int smallarr(int a[],int len)
{
	if(i==0)
	{
		temp=a[0];
	}
	if(i<len)
	{
		if(a[i]<temp)
		{
			temp=a[i];
		}
		i++;
		smallarr(a,len);
	}
	return temp;
}

int main()
{
	int a[10],i,len,small,temp;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nGiven array is : ");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	small=smallarr(a,len);
	printf("\nSmallest element in array is : %d",small);
	
	return 0;
}
*/

//==========================================================================================================
//Q.8) WAP to print all natural numbers from 1 to n. - using while loop
//==========================================================================================================

/*
#include<stdio.h>

int naturalnum(int i,int n)
{
	if(i<=n)
	{
		printf("\n%d",i);
		i++;
		naturalnum(i,n);
	}
}

int main()
{
	int i=1,n;
	printf("Enter the limit to print natural number : ");
	scanf("%d",&n);
	naturalnum(i,n);
	
	return 0;
}
*/

//==========================================================================================================
//Q.9) WAP to print all natural numbers in reverse (from n to 1). - using while loop
//==========================================================================================================

/*
#include<stdio.h>

int revnum(int n,int i)
{
	if(n>=i)
	{
		printf("\n%d",n);
		n--;
		revnum(n,i);
	}
}

int main()
{
	int n,i=1;
	printf("Enter the starting value : ");
	scanf("%d",&n);
	revnum(n,i);
	
	return 0;
}
*/

//==========================================================================================================
//Q.10) WAP to print all alphabets from a to z. - using while loop
//==========================================================================================================

/*
#include<stdio.h>

int alphabets(int a,int z)
{
	if(a<=z)
	{
		printf("%c ",a);
		a++;
		alphabets(a,z);
	}
}

int main()
{
	int a=65,z=90;
	printf("Total alphabets are : ");
	alphabets(a,z);
	
	return 0;
}
*/

//==========================================================================================================
//Q.11) WAP to print all even numbers between 1 to 100. - using while loop
//==========================================================================================================

/*
#include<stdio.h>

int evennum(int n,int i)
{
	if(i<=n)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		i++;
		evennum(n,i);
	}
}

int main()
{
	int n,i=1;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("\nTotal even numbers between 1 to %d are :\n",n);
	evennum(n,i);
	
	return 0;
}
*/

//==========================================================================================================
//Q.12) WAP to print all odd number between 1 to 100.
//==========================================================================================================

/*
#include<stdio.h>

int oddnum(int n,int i)
{
	if(i<=n)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
		i++;
		oddnum(n,i);
	}
}

int main()
{
	int n,i=1;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("\nTotal odd numbers between 1 to %d are :\n",n);
	oddnum(n,i);
	
	return 0;
}
*/

//==========================================================================================================
//Q.13) WAP to find sum of all natural numbers between 1 to n.
//==========================================================================================================

/*
#include<stdio.h>

int sum=0;
int sumnat(int i,int n)
{
	if(i<=n)
	{
		sum=sum+i;
		i++;
		sumnat(i,n);
	}
	return sum;
}

int main()
{
	int i=1,n,sum;
	printf("Enter the limit to calculat sum of all natural number : ");
	scanf("%d",&n);
	sum=sumnat(i,n);
	printf("\nSum of total natural number from 1 to %d is : %d",n,sum);
	return 0;
}
*/

//==========================================================================================================
//Q.14) WAP to find sum of all even numbers between 1 to n.
//==========================================================================================================

/*
#include<stdio.h>

int sum=0;
int sumeven(int n,int i)
{
	if(i<=n)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		i++;
		sumeven(n,i);
	}
	
	return sum;
}

int main()
{
	int n,i=1,sum=0;
	printf("Enter the limit : ");
	scanf("%d",&n);
	sum=sumeven(n,i);
	printf("\nSum of all even numbers between 1 to %d is : %d",n,sum);
	return 0;
}
*/

//==========================================================================================================
//Q.15) WAP to find sum of all odd numbers between 1 to n.
//==========================================================================================================

/*
#include<stdio.h>

int sum=0;
int sumodd(int n,int i)
{
	if(i<=n)
	{
		if(i%2==1)
		{
			sum=sum+i;
		}
		i++;
		sumodd(n,i);
	}
	
	return sum;
}

int main()
{
	int n,i=1,sum=0;
	printf("Enter the limit : ");
	scanf("%d",&n);
	sum=sumodd(n,i);
	printf("\nSum of all odd numbers between 1 to %d is : %d",n,sum);
	return 0;
}
*/

//==========================================================================================================
//Q.16) WAP to print multiplication table of any number.
//==========================================================================================================

/*
#include<stdio.h>

int i=1;
int table(int n)
{
	if(i<=10)
	{
		printf("\n%d",n*i++);
		table(n);
	}
}

int main()
{
	int n;
	printf("Enter the number to print table : ");
	scanf("%d",&n);
	
	table(n);
	
	return 0;
}
*/

//==========================================================================================================
//Q.17) WAP to count number of digits in a number.
//==========================================================================================================

/*
#include<stdio.h>
int count=0;
int digitcount(n)
{
	if(n!=0)
	{
		count++;
		n=n/10;
		digitcount(n);
	}
	return count;
}

int main()
{
	int n,digits;
	printf("Enter a number : ");
	scanf("%d",&n);
	digits=digitcount(n);
	printf("\nTotal number of digits are present : %d",digits);
	
	return 0;
}
*/

//==========================================================================================================
//Q.18) WAP to find first and last digit of a number.
//==========================================================================================================

/*
#include<stdio.h>
#include<math.h>

int count=0;
int counts(n,temp)
{
	if(n!=0)
	{
		count++;
		n=n/10;
		counts(n,temp);
	}
	int first=temp/pow(10,count-1);
	return first;
}

int main()
{
	int n,temp,fd,ld;
	printf("Enter a number : ");
	scanf("%d",&n);
	temp=n;
	fd=counts(n,temp);
	printf("First digit is : %d",fd);
	n=temp;
	ld=n%10;
	printf("\nLast digit is : %d",ld);
	
	return 0;
}
*/

//==========================================================================================================
//Q.19) WAP to find sum of first and last digit of a number.
//==========================================================================================================

/*
#include<stdio.h>
#include<math.h>

int count=0;
int sumFdld(n,temp)
{
	if(n!=0)
	{
		count++;
		n=n/10;
		sumFdld(n,temp);
	}
	int first=temp/pow(10,count-1);
	return first;
}

int main()
{
	int n,temp,fd,ld,sum;
	printf("Enter a number : ");
	scanf("%d",&n);
	temp=n;
	fd=sumFdld(n,temp);
	n=temp;
	ld=n%10;
	sum=fd+ld;
	printf("\nSum of first and last digit is : %d",sum);
	
	return 0;
}
*/

//==========================================================================================================
//Q.20) WAP to swap first and last digits of a number.
//==========================================================================================================

/*
#include<stdio.h>
#include<math.h>

int count=0;
int swapFdld(n,temp,ld)
{
	if(n!=0)
	{
		count++;
		n=n/10;
		swapFdld(n,temp,ld);
	}
	int p1=pow(10,count-1);
	int fd=temp/p1;
	temp=temp/10;
	int p2=pow(10,count-2);
	int mid=temp%p2;
	int swap=ld*p1+mid*10+fd;
	return swap;
}

int main()
{
	int n,temp,ld,swap;
	printf("Enter a number : ");
	scanf("%d",&n);
	temp=n;
	ld=n%10;
	swap=swapFdld(n,temp,ld);
	printf("\nSwaped number is : %d",swap);
	
	return 0;
}
*/

//==========================================================================================================
//Q.21) WAP to calculate sum of digits of a number.
//==========================================================================================================

/*
#include<stdio.h>

int sum=0;
int sumofDigits(int n)
{
	if(n!=0)
	{
		int rem=n%10;
		n=n/10;
		sum=sum+rem;
		sumofDigits(n);
	}
	return sum;
}

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	sum=sumofDigits(num);
	printf("\nSum of total number of digits is : %d",sum);
}
*/

//==========================================================================================================
//Q.22) WAP to calculate product of digits of a number.
//==========================================================================================================

/*
#include<stdio.h>

int sum=1;
int productofDigits(int n)
{
	if(n!=0)
	{
		int rem=n%10;
		n=n/10;
		sum=sum*rem;
		productofDigits(n);
	}
	return sum;
}

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	int sum=productofDigits(num);
	printf("\nProduct of total number of digits is : %d",sum);
	
	return 0;
}
*/

//==========================================================================================================
//Q.23) WAP to enter a number and print its reverse.
//==========================================================================================================

/*
#include<stdio.h>

int rev=0;
int revNum(int n)
{
	if(n!=0)
	{
		int rem=n%10;
		n=n/10;
		rev=rev*10+rem;
		revNum(n);
	}
}

int main()
{
	int num;
	printf("Enter the numbers : ");
	scanf("%d",&num);
	rev=revNum(num);
	printf("\nReversed number is : %d",rev);
}
*/

//==========================================================================================================
//Q.24) WAP to check whether a number is palindrome or not.
//==========================================================================================================

/*
#include<stdio.h>

int rev=0;
int palindromeNot(int n)
{
	if(n!=0)
	{
		int rem=n%10;
		n=n/10;
		rev=rev*10+rem;
		palindromeNot(n);
	}
	return rev;
}

int main()
{
	int num;
	printf("Enter the numbers : ");
	scanf("%d",&num);
	rev=palindromeNot(num);
	
	if(rev==num)
	{
		printf("\n%d it is a palindrome number.");
	}
	else
	{
		printf("\n%d it is not a palindrome number.");
	}
	
	return 0;
}
*/


//==========================================================================================================
//Q.25) WAP to find frequency of each digit in a given integer.
//==========================================================================================================

/*
#include<stdio.h>
int c=0;
int countFrequency(int n,int d)
{
	if(n!=0)
	{
		if(n%10==d)
		{
			c++;
		}
		n=n/10;
		countFrequency(n,d);
	}
	if(c==0)
	{
		return 0;
	}
	else
	{
		return c;
	}
}

int main()
{
	int num,skey,f;
	printf("Enter the number :\n");
	scanf("%d",&num);
	printf("\nEnter a digit to find frequency of that digit : ");
	scanf("%d",&skey);
	f=countFrequency(num,skey);
	printf("\nFrequency of %d is in %d number is : %d",skey,num,f);
	
	return 0;
}
*/

//==========================================================================================================
//Q.26) WAP to enter a number and print it in words.
//==========================================================================================================

/*
#include<stdio.h>
int rev=0;
int convertNum(int n)
{
	if(n!=0)
	{
		int rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		convertNum(n);
	}
	
	if(rev!=0)
	{
		int o=rev%10;
		rev=rev/10;
		
		switch(o)
		{
			case 0:
				printf("Zero ");
				break;
			case 1:
				printf("One ");
				break;	
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
			
			default : printf("You entered wrong number.");						
		}
		convertNum(n);
	}
}

int main()
{
	int num,o;
	printf("Enter any number : ");
	scanf("%d",&num);
	convertNum(num);
	
	return 0;
}
*/

//==========================================================================================================
//Q.27) WAP to print all ASCII character with their values.
//==========================================================================================================

/*
#include<stdio.h>

int allASCII(int s,int n)
{
	if(s<=256)
	{
		printf("%d=%c ",s++,s);
		allASCII(s,n);
	}
}

int main()
{
	int i=0,as=256;
	allASCII(i,as);
	
	return 0;
}
*/

//==========================================================================================================
//Q.28) WAP to find power of a number using for loop.
//==========================================================================================================

/*
#include<stdio.h>
int p=1;
int findPower(int n,int i)
{
	if(i!=0)
	{
		p=p*n;
		i--;
		findPower(n,i);
	}
	return p;
}

int main()
{
	int base,index,power;
	printf("Enter base and index :\n");
	scanf("%d%d",&base,&index);
	power=findPower(base,index);
	printf("Power is : %d",power);
	return 0;
}
*/

//==========================================================================================================
//Q.29) WAP to find all factors of a number.
//==========================================================================================================

/*
#include<stdio.h>

int i=1;
int findFactors(int n)
{
	if(i!=n)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
		i++;
		findFactors(n);
	}
}

int main()
{
	int num;
	printf("Enter the number to find factors : ");
	scanf("%d",&num);
	printf("\nAll factors of %d number is : ",num);
	findFactors(num);
	
	return 0;
}
*/

//==========================================================================================================
//Q.30) WAP to calculate factorial of a number.
//==========================================================================================================

/*
#include<stdio.h>

int f=1;
int calFactorial(int n)
{
	if(n!=0)
	{
		f=f*n;
		n--;
		calFactorial(n);
	}
}

int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	printf("Factorial of %d is : %d",num,calFactorial(num));
	
	return 0;
}
*/

//==========================================================================================================
//Q.31) WAP to find HCF (GCD) of two numbers.
//==========================================================================================================

/*
#include<stdio.h>
int findHCF(int n1,int n2)
{
	if(n1!=n2)
	{
		if(n1>n2)
		{
			n1=n1-n2;
		}
		else
		{
			n2=n2-n1;
		}
		return findHCF(n1,n2);
	}
	return printf("%d",n1);
}

int main()
{
	int num1,num2;
	printf("Enter two number :\n");
	scanf("%d %d",&num1,&num2);
	printf("The HCF(GCD) of %d and %d is : ",num1,num2);
	findHCF(num1,num2);
	return 0;
}
*/

//==========================================================================================================
//Q.32) WAP to find LCM of two numbers.
//==========================================================================================================

/*
#include<stdio.h>
int flag=1,lcm;
int findLCM(int n1,int n2,int max)
{
	
	if(flag)
	{
		if(max%n1==0&&max%n2==0)
		{
			lcm=max;
			flag=0;
		}
		max++;
		return findLCM(n1,n2,max);
	}
	return printf("%d",lcm);
	
}

int main()
{
	int a,b,max;
	printf("Enter two numbers :\n");
	scanf("%d %d",&a,&b);
	printf("\nThe LCM of %d and %d is : ",a,b);
	max=(a>b)?a:b;
	
	findLCM(a,b,max);
	
	return 0;
}
*/

//==========================================================================================================
//Q.33) WAP to check whether a number is Prime number or not.
//==========================================================================================================

/*
#include<stdio.h>

int i=1,count=0;
int checkPrime(int n)
{
	if(i!=n)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
		checkPrime(n);
	}
	else if(count>=2)
	{
		printf("\n%d it is not a prime number.",n);
	}
	else
	{
		printf("\n%d it is a prime number.",n);
	}
}

int main()
{
	int num,p;
	printf("Enter a number to check prime or not : ");
	scanf("%d",&num);
	checkPrime(num);
	
	return 0;
}
*/

//==========================================================================================================
//Q.34) WAP to print all Prime numbers between 1 to n.
//==========================================================================================================

/*
#include<stdio.h>

int i=1,j=1,count=0;
int allPrime(int n)
{
	if(i<=n)
	{
		if(j!=i)
		{
			if(i%j==0)
			{
				count++;
			}
			j++;
			allPrime(n);
		}
		else
		{
			if(count==1)
			{
				printf("%d ",i);
			}
			j=1;
			count=0;
		}
		i++;
		allPrime(n);
	}
}

int main()
{
	int limit;
	printf("Enter the limit to print all prime number : ");
	scanf("%d",&limit);
	allPrime(limit);
	
	return 0;
}
*/

//==========================================================================================================
//Q.35) WAP to find sum of all prime numbers between 1 to n.
//==========================================================================================================

/*
#include<stdio.h>

int i=1,j=1,count=0,sum=0;
int sumallPrime(int n)
{
	if(i<=n)
	{
		if(j!=i)
		{
			if(i%j==0)
			{
				count++;
			}
			j++;
			sumallPrime(n);
		}
		else
		{
			if(count==1)
			{
				printf("%d ",i);
				sum=sum+i;
			}
			j=1;
			count=0;
		}
		i++;
		sumallPrime(n);
	}
	return sum;
}

int main()
{
	int limit;
	printf("Enter the limit : ");
	scanf("%d",&limit);
	printf("\nAll prime number between 1 to %d are : ",limit);
	sum=sumallPrime(limit);
	printf("\nSum of all prime number is : %d",sum);

	return 0;
}
*/

//==========================================================================================================
//Q.36) WAP to find all prime factors of a number.
//==========================================================================================================

/*
#include<stdio.h>

int i=1,j=1,count=0;
int findPrimeFactors(int n)
{
	if(i!=n)
	{
		if(n%i==0)
		{
			if(j<=i)
			{
				if(i%j==0)
				{
					count++;
				}
				j++;
				findPrimeFactors(n);
			}
			if(count==2)
			{
				printf("%d ",i);
			}
			j=1;
			count=0;
		}
		i++;
		findPrimeFactors(n);
	}
}

int main()
{
	int num;
	printf("Enter the number to find prime factors : ");
	scanf("%d",&num);
	printf("\nAll prime factors of number %d are : ",num);
	findPrimeFactors(num);
	
	return 0;
}
*/

//==========================================================================================================
//Q.37) WAP to check whether a number is Armstrong number or not.
//==========================================================================================================

/*
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
*/

//==========================================================================================================
//Q.38) WAP to print all Armstrong numbers between 1 to n.
//==========================================================================================================

/*
#include<stdio.h>

int num=1,rem,count=0,p,i,temp,t2,sum=0;
int allArmstrong(int limit)
{
	if(num<=limit)
	{
		temp=t2=num;
		while(t2>0)
		{
		    t2=t2/10;
		    count++;
	    }
	    t2=temp;
	    while(t2!=0)
	    {
		    rem=t2%10;
		    p=1;
		    i=1;
		    while(i<=count)
		    {
		    	p=p*rem;
		    	i++;
		    }
		    sum=sum+p;
		    t2=t2/10;
	    }
	    if(sum==temp)
	    {
			printf("%d  ",sum);
	    }
	    count=0;
	    sum=0;
	    num++;
	    return allArmstrong(limit);
    }
}
    
int main()
{
	int limit;
	printf("Enter the limit :\n");
	scanf("%d",&limit);
	printf("\nArmstrong number between 1 to %d is : ",limit);
	allArmstrong(limit);
	
	return 0;
}
*/

//==========================================================================================================
//Q.39) WAP to check whether a number is Perfect number or not.
//==========================================================================================================

/*
#include<stdio.h>

int i=1,sum=0;
int checkPerfect(int n)
{
	if(i!=n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
		checkPerfect(n);
	}
	else if(sum==n)
	{
		printf("\n%d it is a perfect number.",n);
	}
	else
	{
		printf("\n%d it is not a perfect number.",n);
	}
}

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	checkPerfect(num);
	
	return 0;
}
*/

//==========================================================================================================
//Q.40) WAP to print all Perfect numbers between 1 to n.
//==========================================================================================================

/*
#include<stdio.h>

int i=1,n=1,sum=0;
int allPerfect(int limit)
{
	if(n<=limit)
	{
		if(i<n)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}
			i++;
			allPerfect(limit);
		}
		if(sum==n)
		{
			printf("%d ",n);
		}
		i=1;
		n++;
		sum=0;
		allPerfect(limit);
	}
}

int main()
{
	int limit;
	printf("Enter the number : ");
	scanf("%d",&limit);
	allPerfect(limit);
	
	return 0;
}
*/

//==========================================================================================================
//Q.41) WAP to check whether a number is Strong number or not.
//==========================================================================================================

/*
#include<stdio.h>

int i,r,sum=0,f;
int checkStrongNot(int n,int t)
{
	if(n!=0)
	{
		int r=n%10;
		for(i=r,f=1;i>=1;i--)
		{
			f=f*i;
		}
		sum=sum+f;
		n=n/10;
		checkStrongNot(n,t);
	}
	else if(sum==t)
	{
		printf("\nGiven number %d it is a strong number.",t);
	}
	else
	{
		printf("\nGiven number %d it is not a strong number.",t);
	}
}

int main()
{
	int num,temp;
	printf("Enter a number : ");
	scanf("%d",&num);
	temp=num;
	checkStrongNot(num,temp);
	
	return 0;
}
*/

//==========================================================================================================
//Q.42) WAP to print all Strong numbers between 1 to n.
//==========================================================================================================

/*
#include<stdio.h>

int n=1,r,i,t,t1,f=1,sum=0;
int allStrong(int l)
{
	if(n<=l)
	{
		int t=t1=n;
		while(t!=0)
		{
			int r=t%10;
			for(i=r,f=1;i>=1;i--)
			{
				f=f*i;
			}
			sum=sum+f;
			t=t/10;
		}
		if(sum==t1)
		{
			printf("%d ",t1);
		}
		sum=0;
		f=1;
		n++;
		allStrong(l);
	}
}

int main()
{
	int limit;
	printf("Enter the limit to print all strong number : ");
	scanf("%d",&limit);
	allStrong(limit);
	
	return 0;
}
*/


//==========================================================================================================
//Q.43) WAP to print Fibonacci series up to n terms.
//==========================================================================================================

/*
#include<stdio.h>
int i=1,f1=0,f2=1,fib;
int fibSeries(int end)
{
	if(i<=end)
	{
		fib=f1+f2;
		f1=f2;
		f2=fib;
		
		printf("%d\t",fib);
		
		i++;
		fibSeries(end);
	}
}

int main()
{
	int limit;
	
	printf("Enter the limit :\n");
	scanf("%d",&limit);
	
	printf("\n%d\t%d\t",f1,f2);
	fibSeries(limit);
	
	
	return 0;
}
*/

