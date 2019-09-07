//exchange last two digits
#include<stdio.h>
int main()
{
	int m,n,p,q;
	printf("enter the no. ");
        scanf("%d",&m);
        n=m%100;
        p=n/10;
        q=m%10;
	m=m/100;
	m=m*10;
	m=m+q;
	m=m*10;
	m=m+p;
	printf("%d",m);
}
