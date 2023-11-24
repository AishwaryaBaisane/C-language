//5. Write C program to calculate factorial of a number.
#include<stdio.h>
main()
{


	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int sum=1;
	while(n>0)
	{
		sum=sum*n;
		n--;
	}
	printf("%d",sum);
}	
