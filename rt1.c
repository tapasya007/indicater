#include<stdio.h>
main()

{
	int x,y,*a,*b,temp;
	
	printf("enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	
	printf("before swapping\nx = %d\ny = %d\n",x,y);
	
	a=&x;
	b=&y;
	
	temp =*b;
	*b = *a;
	*a = temp;
	
	printf("after swapping\nx = %d\ny = %d\n",x,y);
	
	return 0;
}
