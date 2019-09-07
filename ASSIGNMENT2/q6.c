// circle

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r,c1,c2;
	printf("enter the values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	c1=(-a/2);
	c2=(-b/2);
	printf("\ncenter is (%f,%f)",c1,c2);
	r=sqrt((pow(c1,2)+pow(c2,2)-c));
	printf("\nradius is %f",r);
}

