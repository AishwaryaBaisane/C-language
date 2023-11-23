//3. WAP to find the n number factorial without a loop. (using a goto statement).
#include<stdio.h>
int main()
{

	int sum=1;
	
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	n:
	sum=sum*n;
    n--;
	
	if(n>=1)
	{
		goto n;
	}
	printf("%d ",sum);

}