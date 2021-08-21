#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter values a,b:");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swapping  a,b is %d,%d",a,b);
	return 0;
}
