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
int main()
{
    int o,num,r,t,flag=0;

    printf("\n1.Number is Armstrong or Not.\n2.Number is Strong or Not.\n3.Number is Duck or Not.\n4.Number is Perfect or Not.\n5.Number id Prime or NOt.");
	printf("\n\nEnter the operation number :\n");
    scanf("%d",&o);
    
    switch(o)
    {
    	case 1:
    	case 2:
    	case 3:
    		
    		printf("Enter the Number :\n");
    		scanf("%d",&num);
    		
    		while(num!=0)
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
	        
		//case 4:
			
			
		//case 5:
			
			
	}
    
    
    return 0;
}
