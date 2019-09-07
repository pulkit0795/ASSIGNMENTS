//slope of a line
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,slope;
	printf("enter a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	printf("\nequation of the line is %fx+%fy+%f=0",a,b,c);
	slope=(-a/b);
	printf("\nslope is %f",slope);
}
