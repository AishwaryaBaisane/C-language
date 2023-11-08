//max 3  using ladder
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("a is max");
	}
	else if(b>a && b>c)
	{
		printf("b is max");
	}
	else if(c>a && c>b)
	{
		printf("c is max");
	}
}