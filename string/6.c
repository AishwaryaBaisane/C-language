//5. WAP to convert given string in Toggal Case.

#include<stdio.h>
#include<String.h>

int main()
{
	int n;
	printf("Enter the V\value of string : ");
	scanf("%d",&n);
	char a[n];
	printf("Enter The String : ");
	scanf("%s",&a);
	int i=0;
	if(a[0]>='a' && a[0]<='z')
	{
		a[0]=a[0]-32;
	}
	printf("%s",a);
}
