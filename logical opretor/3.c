#include<stdio.h>
main()
{
	int x=10;
	int y=20;
	
	printf("%d",!((++x == (x>y)) && (++y == (x++) || (++x == !(x>y)))));
	//  0   &&  0  || 0
	//  1    
}