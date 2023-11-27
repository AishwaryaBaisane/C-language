#include<stdio.h>
main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
    int t=n;//121
   	int r;
	
	while(n!=0)
	{
//		int n1=n%10;//1  2
//		r=r*10+n1;//1  12
//		n=n/10;//12  1 
        int n1=n/10;//
        r=r*10+n1;
        int n2=n1/10;
        r=r*10+n2;
  
	}
	if(t==r)
	{
		printf("p");
		
	}
}