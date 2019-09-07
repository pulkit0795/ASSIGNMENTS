// distance b/w point and a line
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e;
	float dist;
	printf("enter the points a,b,c,d,e");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	dist=(((a*c)+(b*d)+e)/(sqrt(pow(c,2)+pow(d,2))));
	printf("distance is %f",dist);
}
