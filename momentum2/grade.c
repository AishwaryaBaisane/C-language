#include<stdio.h>
main()
{
	int p,c,b,m,C;
	printf("enter marks of physics :");
	scanf("%d",&p);
	printf("enter marks of chemistry :");
	scanf("%d",&c);
	printf("enter marks of biology :");
	scanf("%d",&b);
	printf("enter marks of mathematics :");
	scanf("%d",&m);
	printf("enter marks of computer :");
	scanf("%d",&C);
	
	int sum = p+c+b+m+C;
	float marks =(sum*100)/500;
	
	printf("%.2f",marks);
}