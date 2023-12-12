//3. WAP to given string length.
#include<stdio.h>
main()
{ 
    int n;
    printf("enter n :");
    scanf("%d",&n);
	char a[n];
	printf("enter name :");	
	scanf("%s",&a);

    printf("\nsize :%d\n",sizeof a/sizeof a[n]);
	
}