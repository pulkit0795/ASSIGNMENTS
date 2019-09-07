//area of triangle using coordinates

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f;
	float s1,s2,s3,s,area;
	// s1=side (a,b) & (c,d)
	// s2=side (c,d) & (e,f)
	// s3=side (e,f) & (a,b)
	printf("enter the coordinates (a,b) , (c,d) & (e,f)");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	s1=sqrt(pow((d-b),2)+(pow((c-a),2)));
	s2=sqrt(pow((f-d),2)+(pow((e-c),2)));
	s3=sqrt(pow((b-f),2)+(pow((a-e),2)));
	s=(s1+s2+s3)/2;
	area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	printf("area of the triangle is %f",area);
}

