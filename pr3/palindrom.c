// 7. wap to check number is palindrom or not.
#include<stdio.h>
main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int sum=0;
	int n1=n/10;
	sum=sum*10+n1;
	int n2=n1/10;
	sum = sum*10+n2;
	
	if(sum==n)
	{
	    printf("number is palindrom");	
	}
	else
	{
		 printf("number is not palindrom");	
	}
	
}