//middle no. out of three


#include<stdio.h>
int main()
{
	int a,b,c,m;
	printf("enter the values of a,b,c\n");
        scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(b>c)
			m=b;
		else
		{
			if(a>c)
				m=c;
			else
				m=a;
		}
	}
	else
	{
		if(c>b)
			m=b;
		else
		{
			if(a>c)
				m=a;
			else
				m=c;
		}
	}
	printf("\n\n%d",m);


}
