#include<stdio.h>
main()
{
   int i,j,n,m;
	printf("enter first value :");
	scanf("%d",&n);
	printf("enter secound value :");
	scanf("%d",&m);
	int a[n][m];
    for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
          printf("enter a[%d][%d]",i,j);
          scanf("%d",&a[i][j]);
        }
	}
	int sum=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(i==0||i==4||j==4||j==0)
			{
				printf("%d",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf(" ");
			}
			
	    }
	    printf("\n");
	}
	printf("\nsum of boundary :%d",sum);
}
//23654
//4   5
//4   7
//6   2
//34563
