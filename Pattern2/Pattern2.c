#include <stdio.h>
#include <stdlib.h>

main()
{
	int i,j,k,l,a;
	printf("enter a : ");
	scanf("%d",&a);
	
	for(i = 0; i < a; i++)
	{
		for(j = 1; j < (a-i); j++ )
		{
			printf(" ");
		}
		
		for(k = 0; k <= 2*i; k++ )
		{
			printf("*");
		}
		
		for(l = 1; l < (a-i); l++ )
		{
			printf(" ");
		}
		
		printf("\n");
	}
	
	
}
