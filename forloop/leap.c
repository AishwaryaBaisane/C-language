#include<stdio.h>
main()
{
	int f=2000;
	int l=3000;
	
	int x;
	for(x=f; f<l; f++)
	{
		f=f+4;
    	printf("%d ",f);
	}
}