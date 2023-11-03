#include<stdio.h>
main()
{
	//153
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int x,y,z,a,b,c;
	x=n%10;//3
	a=n/10;//15.3
	y=a%10;//5.3
	b=a/10;//1.53
	z=b%10;//1.53
	
	c=(x*x*x)+(y*y*y)+(z*z*z);//27+125+1
	printf("num :%d",c==n);
}