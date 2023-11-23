//2. WAP to demonstrate the use of continue keyword.
#include<stdio.h>
main()
{
	int y;
	printf("enter y :");
	scanf("%d",&y);
	
	int x;
	for(x=1; x<=10; x++)
	{
	
		if(x==y)
		{
			continue;
		}
			printf("%d ",x);
		
	}
}