//90 degree angle in triangle

#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the sides of the triangle");
        scanf("%f%f%f",&a,&b,&c);
	if((a*a)==(b*b)+(c*c))
		printf("\n90 degree angle");
	else
		printf("\nnot a 90 degree angle");
}
