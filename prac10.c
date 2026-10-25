#include<stdio.h>
void main()
{
	int num,ans;

	printf("Enter Number For Multiplication Table");
	scanf("%d,&num");

	for(i=0;i<=10;i++)
	{
		ans=num*i;
		printf("%d * %d=%d \n",num,i,ans);
	}
}