int swap(int **x,int **y)
{
	int c;
	c = **x;
	**x = **y;
	**y = c;

}
int main()
{
	int a;
	int b;
	
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	
	printf("Before swapping :\n");
	printf("a :%d\n",a);
	printf("b :%d\n",b);
	
	int *x = &a;
	int *y = &b; 
	swap(&x,&y);
	printf("After swapping :\n");
	printf("a :%d\n",*x);
	printf("b :%d\n",*y);
}