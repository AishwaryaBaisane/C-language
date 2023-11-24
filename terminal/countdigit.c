//3. Write C program to count number of digits in a number.

#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("%d",count);
}