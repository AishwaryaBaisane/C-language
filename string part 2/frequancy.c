#include<stdio.h>
#include<string.h>

int main()
{
	char a[200],x;
	printf("enter string :");
	gets(a);
	
	int i;
	for(x=65; x<=122; x++)
	{
	   int count=0;
		for(i=0; a[i]!='\0'; i++)
		{
			if(x==a[i])
			{
				count++;
			}
		}
		if(count>0)
		{
			printf("%c is %d times\n",x,count);
		}
		
	}
}