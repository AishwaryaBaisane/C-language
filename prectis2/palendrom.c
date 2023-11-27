#include<stdio.h>
main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int sum=0;
	int n1=n/10;//12.1
	sum=sum*10+n1;//12.1
	int n2=n1/10;//1.21
	sum=sum*10+n2;//120+1
	
	printf("%d",sum==n);
//C program to check whether a string is palindrome or not without using the library function.

}
//#include<stdio.h>
//
//main()
//{
//	char a[20];
//	printf("enter a name:");
//	scanf("%s",&a);
//	
//	int i;
//	
//	int length=0,c=1;
//	
//	 for (i = 0; a[i] != 0; i++)
//	 {
//	 	length++;
//	 }
//	 
//	for(i=0;i<length/2;i++)
//	{
//		if(a[i]!=a[length-i-1])
//		{
//			c++;
//		}
//	}
//	if(c==i)
//	{
//		printf("string is palindrome");
//	}
//	else
//	{
//		printf("string is not palindrome");
//	}
//}
