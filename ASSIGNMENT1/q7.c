//sum of last two digits
#include<stdio.h>
int main()
{
        int s,m,n,p,q;
        printf("enter the no. ");
        scanf("%d",&m);
        n=m%100;
        p=n/10;
        q=m%10;
	s=p+q;
	printf("%d+%d=%d",p,q,s);
}

