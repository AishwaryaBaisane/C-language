//prime
#include<stdio.h>
main()
{
	
	int x;
	printf("enter x :");
	scanf("%d",&x);
	
	printf("%d",x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0);
}
