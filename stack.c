//
#include<stdio.h>
int stack[100], top = -1, size;
void push(int ele){
	if(top == size-1)
	{
		printf("stack is full. insertion are not possible\n");
	}
	else
	{
		top++;
		stack[top]==ele;
		printf("%d is inserted into stack\n",ele);
	}
}
int pop() {
	if(top == -1)
	{
		return -1;
	}
	else
	{
		int rm;
		rm = stack[top];
		top--;
		return rm;
	}
}
void peek() {
	if (top == -1){
		return -1;
	}	 
	else
	{
		printf("Element at top is : %d\n",stack[top]);
	}

}
void display()
{
	int i;
	if(top == -1)
	{
		printf("stack is empty. no elements to display");
	}
	else
	{
		printf("Elements in the stack are :\n");
		for(i=top;i>=0;i++)
		{
			printf("%d",stack[i]);
		}	
		printf("\n");
	}
}
int main()
{
	printf("Enter the size of stack : ");
	scanf("%d",&size);
	//menu driven prgoram 
	while(1)
	{
		int choice;
		printf("Enter  1. Push 2. Pop 3. peek 4. Display Enter any other number to exit : ");
		scanf("%d",&choice);
		if(choice == 1)
		{
			//push() operation 
			int ele;
			printf("Enter an element to pushed into the stack: ");
			scanf("%d",&ele);
			push(ele);
			
		}
		else if(choice ==2)
		{
			//Pop operation
			int rev_ele = pop();
			if(rev_ele == -1)
			{
				printf("Stack is empty. cannot delete the element");
			}
			else
			{
				printf("Removed element is %d",rev_ele);
			}
		}
		else if(choice == 3)
		{
			//peek() operaton 
			peek();
		}
		else if(choice == 4)
		{
			//Display operation
			display();
		}
		else{
			printf("Thank You");
			break;
		}
	}
}
