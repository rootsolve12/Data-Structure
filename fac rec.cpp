#include<stdio.h>
long factorial(int n)
{
	if(n==0)
	return 1;
	else
	return(n*factorial(n-1));
}
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	
	printf("factorial of %d = %ld",num,factorial(num));
	return 0;
}
