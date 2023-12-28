#include<stdio.h>
int pass()
{
	int gun=20;
	return gun;
}
int pass1()
{
	int gun1=20;
	return gun1;
}
int pass2()
{
	int gun2=50;
	return gun2;
}
int deal(int gun,int gun1,int gun2)
{
   
    int ans = gun+gun1+gun2;
	return ans;
}
int roky()
{
	int x=10;
	x=x+deal(pass(),pass1(),pass2());
	return x;
}

int main()
{
	printf("%d",roky());
}