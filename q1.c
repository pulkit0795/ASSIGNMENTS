// biggest no.

#include<stdio.h>
int main()
{
	float a,b,c,m;
	printf("enter the three values");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b)
	{
		if(b>c)
			m=a;
		else if(a>c)
			m=a;
	}
	else
	{
		if(b>c)
			m=b;
		else
			m=c;
	}
	printf("biggest no. is %f",m);
}

