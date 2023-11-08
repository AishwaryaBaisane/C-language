//min 3  using ladder
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b && a<c)
	{
		printf("a is min");
	}
	else if(b<a && b<c)
	{
		printf("b is min");
	}
	else if(c<a && c<b)
	{
		printf("c is min");
	}
}