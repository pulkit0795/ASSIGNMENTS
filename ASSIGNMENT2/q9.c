//plane+sphere=circle

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	float rad,dist,c1,c2,c3,r,area;
	printf("enter the values of a,b,c,d,e,f,g,h");
        scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
	//ax+by+cz+d=0 is a plane
	//x^2 + y^2 + z^2 + ex+fy+gz+h=0
	//(c1,c2,c3) coordinates of centre of sphere
	//r is radius of sphere
	c1=(-e/2);
	c2=(-f/2);
	c3=(-g/2);
	printf("\ncenter of sphere is (%f,%f,%f)",c1,c2,c3);
	r=(sqrt((pow(c1,2)+pow(c2,2)+pow(c3,2)-h)));
	printf("\nradius of the sphere is %f",r);
	//dist is distance of centre of sphere from plane
	dist=((a*c1)+(b*c2)+(c*c3)+d)/(sqrt(pow(a,2)+pow(b,2)+pow(c,2)));
	printf("\ndistance from plane is %f",dist);
	//rad is radius of circle formed
	rad=sqrt(pow(r,2)-pow(dist,2));
	area=3.14*pow(rad,2);
	printf("\narea of the circle is %f",area);
}
