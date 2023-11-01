#include<stdio.h>
main()
{
	int x=20;
	int y=10;
	
	printf("%d",(x>y) || (x!=y) && (x>0 || y<0));
	//  1 ||1&&1
	// 1 
}