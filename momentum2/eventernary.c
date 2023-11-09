//2. Write C program to check a number is even or odd using ternary operator.
#include<stdio.h>
main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	
	(n%2==0)? printf("number is even"):printf("number is odd");
	
}