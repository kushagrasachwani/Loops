#include<stdio.h>

main()
{
	int no,rev,x,c;
	printf("Enter the number");
	scanf("%d", &no);
	c=no;
	while(no>0)
	{
		x=no%10;
		rev=rev+x*x*x;
		no=no/10;
	}
	printf("\n number=%d reverse=%d", c,rev);
	
	if(c==rev)
	{
		printf("\nNo is Armstrong");
	}
	else
	{
		printf("\nNo is not Armstrong");
	}
}
