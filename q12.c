//line & circle

#include<stdio.h>
#include<math.h>
int main()
{
	int p,q,r,a,b,c;
	float area,chord,dist,x,y;
	printf("enter the values of p,q,r,a,b,c\n");
        scanf("%d%d%d%d%d%d",&p,&q,&r,&a,&b,&c);
	dist=((a*p)+(b*q)+c)/(sqrt((a*a)+(b*b)));
	if(dist>r)
		printf("no intersection");
	else
	{
		chord=2*(sqrt(pow(r,2)-pow(dist,2)));
		area=dist*chord/2;
		printf("area of triangle is %f",area);
	}
}
