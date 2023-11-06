//3 WAP to Find max< from given 4 no< u2ing nested
//if el2e
#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	printf("enter c :");
	scanf("%d",&c);
	printf("enter d :");
	scanf("%d",&d);
	
	if(a>b)
	{
		//a,c,d
		if(a>c)
		{
		   //a,d
		   if(a>d)
		   {
		   	  //a
		   	  printf("a is max");
		   	
		   }
		   else
			{
				//d
				printf("d ia max");
			}	
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c ia max");
			}
			else
			{
				//d
				printf("d ia max");
			}
			
		}
	}
	else
	{
		//b,c,d
		if(b>c)
		{
			//c,d
			if(b>d)
			{
				//b
				printf("b ia max");
			}
			else
			{
				//d
				printf("d ia max");
			}
			
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c ia max");
			}
			else
			{
				//d
				printf("d ia max");
			}
			
			
		}
		
	}
	
}