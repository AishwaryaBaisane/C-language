#include<stdio.h>
main()
{
	int x=1;
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int sum=0;
	
	do
	{
	//	printf("%d ",x);
	
		sum=sum+x;
		x++;
		
	}while(x<=n);
	
	printf("%d",sum);
}