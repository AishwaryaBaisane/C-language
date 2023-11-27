#include<stdio.h>
main()
{

	int r;
	printf("enter r :");
	scanf("%d",&r);
	
	//121
	
	int n1,n2;
	int sum=0;
	n1=r/10;
	sum=sum*10+n1;
	n2=n1/10;
	sum=sum*10+n2;
	
	printf("%d",sum);
	
	int n;
	printf("\nenter n :");
	scanf("%d",&n);
	
	//153
	
	int a,b,x,y,z;
	int sum1=1;
	x=n%10;
	a=n/10;
	y=a%10;
	b=a/10;
	z=b%10;
	
	sum1=(x*x*x)+(y*y*y)+(z*z*z);
	
	printf("%d",sum1==n);
	
	int t;
	printf("\nenter n4 :");
	scanf("%d",&t);
	
	int ld=t%10;
	
	while(t>9)
	{
		t=t/10;
	}
	printf("%d",t+ld);
	
	
	
}