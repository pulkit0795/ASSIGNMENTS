//distance b/w two points

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float dist;
	printf("enter the values of (a.b) & (c,d)\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	dist=sqrt((pow((d-b),2)+(pow((c-a),2))));
	printf("distance is %f",dist);
}
