//delete second last digit
#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the no.");
	scanf("%d",&m);
	n=m%10;
	m=m/100;
	m=m*10;
	m=m+n;
	printf("%d",m);
}
