#include<stdio.h>

main()
{
	int i,l,s=0;
	printf("Enter the last number=");
	scanf("%d", &l);
	for(i=1;i<=l;i++)
	{
		printf("%d +", i*i);
		s=s+i*i;
	}
	printf("=%d", s);
}
