#include <stdio.h>
#include <stdlib.h>

main()
{
	int a,i,j,k,l,m;
	
	printf("enter the value of a: " );
	scanf("%d",&a);
	
		for(i=1;i<a;i++)
		{
		    
		    
		    m = 2*(a-i);
		    
			for(j=1; j<=i; j++)
			{
				printf("*");
			}
			
			for(l=1; l<m; l++)
			{
				printf(" ");
			}
			
			for(k=1; k<=i; k++)
			{
				printf("*");
			}
			printf("\n");
		
        }
}
