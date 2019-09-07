//square & cube

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two no. ");
	scanf("%d %d",&a,&b);
	c=(a*a)+(b*b*b);
	printf("(%d)^2 + (%d)^3 = %d",a,b,c);
}
