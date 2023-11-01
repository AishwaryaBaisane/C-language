#include<stdio.h>
main()
{
	int x=10;
	int y=11;
	
	printf("%d",!((x++ == --y) && (++x == --y) || (x<y)));
	//10 == 10 
	//0 0
	//0
	//1
	

}