//slope of line

#include<stdio.h>
int main()
{
	float a,b,c,m;
	printf("enter the values of a,b & c");
	scanf("%f%f%f",&a,&b,&c);
	if(b==0)
	{
		printf("slope is infinite\nvertical line");
	}
	else
	{
	m=(-a/b);
	printf("slope is %f\nnot a vertical line",m);

	}
}
