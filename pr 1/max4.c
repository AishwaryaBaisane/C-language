#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	printf("a :%d\n",(a>b && a>c && a>d));
	printf("b :%d\n",(b>a && b>c && b>d));
	printf("c :%d\n",(c>a && c>b && c>d));
	printf("d :%d",(d>a && d>b && d>c));
	
}