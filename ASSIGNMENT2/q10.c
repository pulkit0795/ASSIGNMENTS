//chord length

#include<stdio.h>
#include<math.h>
int main()
{
        int h,k,r,s;
        float dist,chord;
	printf("enter the values of h,k,r,s");
        scanf("%d%d%d%d",&h,&k,&r,&s);
	dist=(h-s);
	chord=2*(sqrt(pow(r,2)-pow(dist,2)));
	printf("\n\n chord length is %f",chord);
}
