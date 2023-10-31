#include<stdio.h>
main()
{
	int x,y;
	
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d",&y);
	
	int ans = (x*x) + (2*x*y) + (y*y);
	printf("%d",ans);
}