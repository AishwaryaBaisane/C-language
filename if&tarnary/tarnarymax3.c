//WAP to Find max< from 3 using ternary operator
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

	(a>b)? (a>c)? printf("a is max"):printf("c is max"):(b>c)? printf("b is max"):printf("c is max");
}
