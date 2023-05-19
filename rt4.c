#include<stdio.h>

main()
{
	int a[100],n,i;
	int *p;
	p = &a;
	printf("enter value of n : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("element in array are : ");
	       for(i=0;i<n;i++)
	{
		printf("%d",*p+i);
    }
	
	printf("\nrevers array : ");
	int *rev;
		rev=&a[n-1];
	    for(i=0;i<n;i++)
	{
		printf("%d",*rev--);
    }    
	          
}
