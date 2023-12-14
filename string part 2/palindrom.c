#include<stdio.h>
main()
{	
	char a[100];
	printf("enter your name :");
	scanf("%s",&a);
	int i;
    int length=0;
    for(i=0; a[i]!=0; i++)
    {
    	length++;
		
    }
	printf("%d",length);
    int j=length;
	int check=0;
    j=j-1;
	for(i=0; i<length; i++)
	{
	
		if(a[i]!=a[j])
		{
			check++;
		}
		j--;
	}
	if(check==0)
	{
		printf("\nstring is palindrom");
	}
	else
	{
		printf("\nstring is not palindrom");
	}
}
