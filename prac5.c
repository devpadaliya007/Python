#include<stdio.h>
void main()
{
	int r;
	float pi=3.14,area=0;

	printf("Enter Radius");
	scanf("%d,&r");

	area=pi*r*r;
	printf("Area of Circle radius of Circle%d is %f",r,area);
}