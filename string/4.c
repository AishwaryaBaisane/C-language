//3. WAP to given string length.
#include<stdio.h>
main()
{ 
    int i,n;
    printf("enter n:");
    scanf("%d",&n);
	char a[n];
	printf("enter name :");	
	scanf("%s",&a);

    int count=0;
    for(i=0; a[i]!=0; i++)
    {
    	count++;
		
    }
	printf("%d",count);
	printf("\n%d",sizeof(a)/sizeof(a[n]));	
}
