//biggest no.(4)

#include<stdio.h>
int main()
{
	float m,a,b,c,d;
	printf("enter the four numbers");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	if(a>b)
	{
		if(c>d)
		{
			if(a>c)
				m=a;
			else
				m=c;
		}
		else
		{
			if(d>a)
				m=d;
			else
				m=a;
		}
	}
	else
	{
		if(c>d)
		{
			if(b>c)
				m=b;
			else
				m=c;
		}
		else
		{
			if(d>b)
				m=d;
			else
				m=b;
		}
	}
	printf("biggest no. is %f",m);
}
