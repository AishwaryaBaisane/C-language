// 4. wap to reverse number of given number. 
#include<stdio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
	int sum=0;
	int n1;
	while(n>0)
	{
		n1=n%10;//3  2
		sum=sum*10+n1;//3  
		n=n/10;//12  
	}
	printf("revers number %d",sum);
	
}