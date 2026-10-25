#include<stdio.h>
void main()
{
	int a,b,c,d;
	float per;

	printf("Enter Maths Marks");
	scanf("%d,&a");

	printf("Enter English Marks");
	scanf("%d,&b");

	printf("Enter Science Marks");
	scanf("%d,&c");

	printf("Enter Maths Marks");
	scanf("%d,&d");

	total=a+b+c+d;
	per=total/400*100;

	printf("total of 4 subj is  %d and you get %f%,total,per");
}
