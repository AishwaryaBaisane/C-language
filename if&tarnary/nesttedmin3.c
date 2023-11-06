//WAP to Find min< from given 3 no< u2ing nested
//if else
#include<stdio.h>
main()
{
    int a,b,c;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	printf("enter c :");
	scanf("%d",&c);
	
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			//a
			printf("a is minimum");
		}
		else
		{
			//c
			printf("c is minimum");
		}
	}
	else
	{
		//b,c
		if(b<c)
		{
			//b
			printf("b is minimum");
		}
		else
		{
			//c
			printf("c is minimum");
		}
	}
		
}