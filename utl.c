#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utl.h"

//???????? ?? ???????????? ?????
void check_enter(int* x)
{
	int check;
	while (1)
	{
		check = scanf("%d", x);
		if (check < 1)
		{
			while (getchar() != '\n');
			printf("Wrong input!\n");
			continue;
		}
		return;
	}
	/*int check = 0;
	while (!check)
	{
		check = scanf("%d", x);
		if (!check)
			printf("\nIncorrect input. Try again: ");
		fflush(stdin);
	}
	return;*/
}