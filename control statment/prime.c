//5. WAP to find the sum of prime numbers between 1 to 50 without using a loop.
#include<stdio.h>
main()
{
	int st=1;
	int end=50;
	int sum=17;
	printf("2 3 5 7 ");
	
	start:
	if(st<=end)
	{
		st++;
		if(st%2!=0 && st%3!=0 && st%5!=0 && st%7!=0)
		{
			printf("%d ",st);
			sum=sum+st;
		}
		goto start;
	}
	printf("\n ans :%d",sum);
}








