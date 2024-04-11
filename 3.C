#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int N=0,i=0;
	

	while (1)
	{
		printf("Enter an integer>> ");
		scanf("%d", &N);
		i = N / 2;
		if (N == 0)
			break;
		else

		{
			while (i!=0)
			{
				
				if (i * i * i < N)
				{
					N -= i * i * i;
					printf("%d + ", i * i * i);
				}
				else if (i * i * i == N)
				{
					N -= i * i * i;
					printf("%d", i * i * i);
				}

				else
					i--;

				
			}
		}
		printf("\n");

	}
	
	return 0;
}
