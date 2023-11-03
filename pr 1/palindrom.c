#include<stdio.h>
#include<conio.h>
main()
{
	int sum=0;
	int n=121;
	int t=n;
	int n1=n/10;  //121/10 =12.1
	sum=sum*10+n1; //12.1
	int n2=n1/10; //12.1/10 =1.21
	sum=sum*10+n2; 

	printf("%d",t==sum);
	
	
}