#include<stdio.h>
int main()
{
	int list[10],size,i,Element;
	printf("enter size of the list:");
	scanf("%d",&Element);
	
	printf("enter any %d integer values:",size);
	for(i=0;i<size;i++)
	scanf("%d",&list[i]);
	
	printf("enter the Element to the search:");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		if(size==list[i])
		{
			printf("Element is found at %d",size,i);
			break;
		}
	}
	if(i==size)
	printf("Given Element is not found in list",size);
	return 0;
}
