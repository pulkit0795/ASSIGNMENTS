// 7 point of intersection

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,p,q,r;
	float x,y,k;
	printf("enter the values of a,b,c,p,q,r");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&p,&q,&r);
	k=a/p;
	p=p*k;
	q=q*k;
	r=r*k;
	y=(c-r)/(q-b);
	x=(-c-(b*y))/a;
	printf("(%f,%f)",x,y);
}
