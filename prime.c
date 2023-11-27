#include<stdio.h>
main()
{
   int i,j,n;
   int check=0;
   printf("enter n :");
   scanf("%d",&n);
   
   for(i=2; i<=n; i++)
   {
     for(j=2; j<=i-1; j++)
   	 {
   		if(i%j==0)
   		{
   			check = 1;
   			
		}
     }
     if(check==0)
     {
     	printf("%d ",i);
	 }
	 check=0;
   }
}