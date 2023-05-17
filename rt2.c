#include<stdio.h>
#define MAX_SIZE 100

 int main()
{
	int arr[MAX_SIZE];
	int num, i;
	int * ptr = arr;
	
	printf("enter size of array:");
	scanf("%d",&num);
	
	printf("enter elements in array:\n");
	for(i = 0; i < num; i++)
	{
		scanf("%d", ptr);
		ptr++;
	}
	ptr = arr;
	
	printf("entered array elements are: ");
	for(i = 0; i < num; i++)
	{
		printf("%d",*ptr);
		ptr++;
	}
	
	return 0;
}
