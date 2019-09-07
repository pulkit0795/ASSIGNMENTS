//f(x)=ax^2 + bx + c

#include<stdio.h>
int main()
{
	int a,b,c,p,f;
	printf("enter values of a,b,c & p ");
	scanf("%d%d%d%d",&a,&b,&c,&p);
	f=(a*(p*p))+(b*p)+c;
	printf("%d(%d)^2 + %d(%d) + %d = %d",a,p,b,p,c,f);
}
