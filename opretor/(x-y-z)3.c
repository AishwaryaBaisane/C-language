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
	
	int ans = (x*x*x)- (y*y*y) - (z*z*z) - (3*x*2*y) + (3*x*y*y) - (3*y*2*z) - (3*y*z*z) + (3*x*z*z) - (3*x*2*z) + (6*x*y*z);
	printf("%d",ans);
}

 