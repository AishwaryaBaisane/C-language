//Write C Program to perform a swapping of two variables without using third variable.
#include<stdio.h>
main()
{
	int a,b;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a =%d\n",a);
	printf("b =%d",b);
}