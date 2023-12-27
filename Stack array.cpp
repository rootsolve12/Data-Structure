#include<stdio.h>
#define size 10
void push(int);
void pop();
int display();
int stack[size],top=-1;
int main()
{
	int value,choice;
	while(1)
	{
		printf("\n\n****memu****\n");
		printf("1.push\n2.pop\n3.display\n4.exit");
		printf("\n enter your choice:");
		scanf("%d,&choice");
		switch(choice)
		{
			case1:printf("ente rthe value to be insert");
			scanf("%d",&value);
			push(value);
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit();
			default:printf("\nwrong selection!!! try again !!!");
		}
	}
}
void push(int value)
{
	if(top==size-1)
	printf("\n stack is full!!insertion is not in possible!!!");
	else
	{
		top++;
		stack[top]=value;
		printf("\n insertion sucess!!!");
	}
}
void pop()
{
	if(top==-1)
	printf("\nstack is empty!!!deletion is not possible!!!");
	else
	{
		printf("\ndeletion : %d",stack[top]);
		top--;
	}
}
int display()
{
if(top==-1)
printf("\nstack is empty");
else
{
for(int i=top;i>=0;i--)
printf("%d\n",stack[i]);	
  }
return 0;
}
