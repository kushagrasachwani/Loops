#include<stdio.h>

main()
{
	int l,i,m=1;
	printf("Enter the last number=");
	scanf("%d", &l);
	for(i=1;i<=l;i++)
	{
		printf("%d ", i);
		m=m*i;
	}
	printf("\n=%d", m);
}
