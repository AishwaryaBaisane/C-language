//palindrom
#include<stdio.h>
main()
{
	int x;
	printf("enter x :");
	scanf("%d",&x);
	
	//121
	int t=x;
	int n1=x/10;
	int sum=0;
	sum=sum*10+n1;
	int n2=n1/10;
	sum=sum*10+n2;
	
	printf("%d",t==sum);
	

}
