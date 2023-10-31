#include<stdio.h>
main()
{
	int x,y;
	
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d",&y);
	
	int ans = (x*x*x) + (3*x*x*y) + (3*x*y*y) + (y*y*y);
	printf("%d",ans);
}

 
