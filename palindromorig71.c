#include<stdio.h>

main()
{
	int no,rev,x,c;
	printf("Enter the number=");
	scanf("%d", &no);
	c=no;
	while(no>0)
	{
		x=no%10;
		rev=rev*10+x;
		no=no/10;
	}
	printf("\n no=%d reverse=%d", c,rev);
	if(c==rev)
	{
		printf("\nNumber is palindrom");
	}
	else
	{
		printf("\n No. is not palindrom");
	}
}
