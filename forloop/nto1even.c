#include<stdio.h>
main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int x;
	
    for(x=n; x>=1; x--)
    {
    	if(n%2==0)
    	{
   	    printf("%d ",n);
        }
        n--;
    }
}