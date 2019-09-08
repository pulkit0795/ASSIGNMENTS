//print odd one out

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b)
		printf("\n\n%d",c);
	else if(b==c)
		printf("\n\n%d",a);
	else if(a==c)
		printf("\n\n%d",b);
	else
		printf("\nall the no. are different");
}
