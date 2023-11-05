#include<stdio.h>
main()
{
	//armstrong number 
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int x,y,z;
	int a,b,c;
	
	x=n%10;
	a=n/10;
	y=a%10;
	b=a/10;
	z=b%10;
	
	c=(x*x*x)+(y*y*y)+(z*z*z);
	printf("%d",c==n);
	//153
}