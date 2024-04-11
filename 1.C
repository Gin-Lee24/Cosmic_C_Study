#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n1, n2, i, sum=0;
	while(1)
	{
		printf("Enter 2 integers >> ");
		scanf("%d %d", &n1, &n2);
		if (n1 == 0 && n2 == 0)
			break;
		for (i = 1; i <= n1; i++)
		{
			if (i % n2 == 0)
			{
				printf(" %d ", i);
				sum += i;
			}
			
		}
		printf("sum = %d\n", sum);
		
	}
	return 0;
}
