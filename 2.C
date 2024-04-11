#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int temperature;
	float celsius, fahrenheit;
	char type;
	while (1)
	{
		printf("Enter temperature and type >> ");
		scanf("%d", &temperature);
		if (temperature == 0)
			break;
		scanf("%c", &type);

		if (type == 'C')
		{
			celsius = (float)temperature;
			fahrenheit = 9 / 5 * celsius + 32;
			printf("Celsius = %.1f Fahrenheit = %.1f\n", celsius, fahrenheit);
		}
		else if (type == 'F')
		{
			fahrenheit = (float)temperature;
			celsius = 5 / 9 * (fahrenheit - 32);
			printf("Celsius = %.1f Fahrenheit = %.1f\n", celsius, fahrenheit);

		}
		else if (temperature == 0)
			break;

	}

	return 0;
}
