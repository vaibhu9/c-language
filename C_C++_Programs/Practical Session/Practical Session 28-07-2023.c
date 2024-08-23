///Practical Session 28-07-2023///

//WAP a menu-driven program in c with following operation using switch case and for loop.
/*
1.Number is Armstrong or Not.
2.Number is Strong or Not.
3.Number is Duck or Not.
4.Number is Perfect or Not.
5.Number id Prime or NOt.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int o,num,r,t,flag=0,count=0,sum=0,sumf=1,i=1;

    printf("\n1.Number is Armstrong or Not.\n2.Number is Strong or Not.\n3.Number is Duck or Not.\n4.Number is Perfect or Not.\n5.Number id Prime or NOt.");
	printf("\n\nEnter the operation number :\n");
    scanf("%d",&o);
    
    switch(o)
    {
    	case 1://Armstrong or not
    		
    		printf("\nEnter the Number :\n");
    		scanf("%d",&num);
    		
    		t=num;
    		
    		for(;num!=0;)
    		{
    			num=num/10;
    			count++;
			}
			num=t;
			for(;num!=0;)
			{
				r=num%10;
				num=num/10;
				sum=sum+(pow(r,count));
			}
			num=t;
			if(sum==num)
			{
				printf("\n%d It is a Armstrong Number.",num);
			}
			else
			{
				printf("\n%d It is Not Armstrong Number.",num);
			}
			break;
    		
    	case 2://Strong or not
    		
    		printf("\nEnter the Number :\n");
    		scanf("%d",&num);//145
    		
    		t=num;
    		for(;num!=0;)  //145!=0 //14!=0
    		{
    			r=num%10;  //r=145%10=5  //r=14%10=4
    			for(;r!=0;)  //5!=0  //4!=0
    			{
    				sumf=sumf*r;  //sumf=1*5=5*4=20*3=60*2=120*1=120  //sumf=1*4=4*3=12*2=24*1=24  //sumf=1*1=1
    				r--;
				}
				num=num/10;  //145/10=14
				sum=sum+sumf;  //sum=0+120=120+24=144+1=145
				sumf=1;
			}
			num=t;
			if(num==sum)
			{
				printf("\n%d It is a Strong Number.",num);
			}
			else
			{
				printf("\n%d It is Not Strong Number.",num);
			}
			break;
    		
    	case 3://Duck or not
    		
    		printf("\nEnter the Number :\n");
    		scanf("%d",&num);
    		
    		for(;num!=0;)
            {
                r=num%10;                    
                if(r==0)
                {
                    flag=1;
                    break;
                }
                num=num/10;
            }
            if(flag)
            {
    	        printf("\nNumber is duck.");
	        }
	        else
	        {
		        printf("\nNumber is not duck.");
	        }
	        break;
	        
		case 4://Perfect or not
			
			printf("\nEnter the number :\n");
			scanf("%d",&num);
			
			for(;i<num;)
			{
				if(num%i==0)
				{
					sum=sum+i;
				}
				i++;
			}
			if(sum==num)
			{
				printf("\n%d It is a Perfect Number.",num);
			}
			else
			{
				printf("\n%d It is not Perfect Number.",num);
			}
			
			break;
			
		case 5://Prime or not
			
			printf("\nEnter the number :\n");
			scanf("%d",&num);
			
			for(;i<=num;)
			{
				if(num%i==0)
				{
					count++;
				}
				i++;
			}
			if(count==2)
			{
				printf("\n%d It is a Prime Number.",num);
			}
			else
			{
				printf("\n%d It is not Prime Number.",num);
			}
			
			break;
		
		default:
			
			printf("\nYou have entered INVALID INPUT.");
	}
    
    return 0;
}
