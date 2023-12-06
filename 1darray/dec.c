#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	int i,j;
	int tmp;
	for(i=0; i<=n; i++)
	{
		
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<=n; i++)
	{
		for(j=i+1; j<=n; j++)
		{
			if(a[j]>a[i])
			{
			tmp=a[j];
			a[j]=a[i];
			a[i]=tmp;
		    }
		}
	}
	for(i=0; i<=n; i++)
	{
		
		printf("%d ",a[i]);
	;
	}

}