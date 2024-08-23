#include<stdio.h>
int main(){
	int choice,stack[5],top=-1,value;
	int max=sizeof(stack)/sizeof(stack[0]);
	do{
		printf("\n1:PUSH DATA IN STACK\n");
		printf("2:POP DATA FROM STACK\n");
		printf("3:DISPLAY DATA\n");
		printf("\nEnter you choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(top==max-1){
					printf("Stack is overflow.\n");
				}
				else{
					printf("Enter data in stack.\n");
					scanf("%d",&value);
					top=top+1;
					stack[top]=value;
				}
				break;
			case 2:
				if(top==-1){
					printf("Stack is underflow.\n");
				}
				else{
					value=stack[top];
					printf("Deleted value is %d\n",value);
					top=top-1;
				}
				break;
			case 3:
				if(top>=0){
					for(int i=top;i>=0;i--){
						printf("stack[%d] ====> %d\n",i,stack[i]);
					}
				}
				else{
					printf("Stack is empty.\n");
				}
				break;
			default: printf("Sorry... You have entered wrong choice\n");
		}
	}while(choice<=3);
	return 0;
}
