//bigger no. first among two

#include<stdio.h>
int main()
{
	float a,b;
	printf("enter the two no.");
	scanf("%f%f\n\n",&a,&b);
	if(a>b)
		printf("%f\n%f",a,b);
	else
		printf("%f\n%f",b,a);
}
