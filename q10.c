//how many are equal to x

#include<stdio.h>
int main()
{
	int a,b,c,d,x,count=0;
        printf("enter the values of a,b,c,d,x\n");
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
	if(a==x)
		count++;
	if(b==x)
		count++;
	if(c==x)
		count++;
	if(d==x)
		count++;
	printf("\n\n%d",count);
}

