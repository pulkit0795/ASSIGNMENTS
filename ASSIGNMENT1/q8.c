//double the last digit(last digit<5)
#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the no.");
	scanf("%d",&m);
	n=m%10;
	n=2*n;
	m=m/10;
	m=m*10;
	m=m+n;
	printf("%d",m);
}
