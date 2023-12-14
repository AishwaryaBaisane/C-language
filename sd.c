//WAP compares two strings.
#include<stdio.h>
#include<string.h>

int main()
{	
	char a[100],b[100];
	printf("enter first string :");
	gets(a);
	printf("enter second string :");
	gets(b);
	int i;
    int length=0;
    for(i=0; a[i]!=0; i++)
    {
    	length++;
		
    }
	printf("%d",length);
    int j=length;
	int check=0;
    j=0;
	for(i=0; i<length; i++)
	{
	
		if(a[i]!=b[j])
		{
			check++;
		}
		j++;
	}
	if(check==0)
	{
		printf("\nstring is same");
	}
	else
	{
		printf("\nstring is not same");
	}
}