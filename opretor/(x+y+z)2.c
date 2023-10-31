#include<stdio.h>
main()
{
	int x,y,z;
	
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d",&y);
	printf("enter z:");
	scanf("%d",&z);
	
	int ans = (x*x) + (y*y) + (z*z) + (2*x*y) + (2*y*z) + (2*y*x);
	printf("%d",ans);
}

 
