//5. WAP to find the sum of prime numbers between 1 to 50 without using a loop.
#include<stdio.h>
main()
{
	int x=1;
	int sum=0;
	
	n:
	if(x<=50)
	{
		x++;
		if(x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0 || x==2 || x==3 || x==5 || x==7)
		{
			printf("%d ",x);
			sum=sum+x;
		}
		goto n;
	}
	printf("\n ans :%d",sum);
}








