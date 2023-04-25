#include<stdio.h>

main()
{
	int no,rev,x,c;
	printf("Enter the no=");
	scanf("%d", &no);
	c=no;
	while(no>0)
	{
		x=no%10;
		no=no/10;
		rev=rev+x;
	}
	printf("\n number=%d sum=%d", c,rev);
}
