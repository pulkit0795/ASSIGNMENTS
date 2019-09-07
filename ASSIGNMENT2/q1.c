//area of triangle

#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,area,s;
	printf("enter the values of sides a,b,c");
        scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt((s*(s-a)*(s-b)*(s-c)));
	printf("the area is %f",area);
}

