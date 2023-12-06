#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter value of n :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<=n; i++)
	{
      printf("enter a[%d]",i);
      scanf("%d",&a[i]);
	}
	int tmp;
	 for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }

    
	
}