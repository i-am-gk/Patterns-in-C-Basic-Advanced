#include<stdio.h>
main ()
{
	for (int i=1 ; i<=5 ; i++)
	
	{
		for (int j=1 ; j<=5 ; j++)
		{
			if(j==i || i==5 ||j==1)
			printf("* ",j);
			else
			printf("  ");
		}
		printf("\n");
	}
	
	}
