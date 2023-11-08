//min 3 using nested
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("a is min");
		}
		else
		{
			printf("c is min");
		}
	}
	else
	{
		if(b<c)
		{
		    printf("b is min");	
		}
		else
		{
			printf("c is min");
		}
	}
}