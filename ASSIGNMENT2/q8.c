//angles in a triangle

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r,d;
	printf("enter the sides of the triangle");
	scanf("%d%d%d",&a,&b,&c);
	r=(acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)));
	printf("angle A in radians is %f",r);
	d=r*180/3.14;
	printf("\nangle A in degrees is %f",d);
}
