//chek number divisible by 7 or not using ternary
#include<stdio.h>
main()
{
	int n;
	printf("ente number :");
	scanf("%d",&n);
	
	(n%7==0)? printf("divisible by 7"):printf("not divisible by 7");
}