#include<stdio.h>
int main()
{	
    //find number is prime or not   
	int n,a=0;
	printf("enter n:");
	scanf("%d",&n);

	int i;
	for(i=1;i<=n;i++)
	{
			if(n%i==0)
			{
				a++;
			}
	}
	if(a==2)
		{
			printf("number is prime");
		}
		else
		{
			printf("number is not prime"); 
		}
	
}