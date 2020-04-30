#include "output.h"
#include "data.h"
#include <stdio.h>
void pretty_print()
{
	printf("A = \n");
	for (int i = 0; i < matrix.size; i++)
	{
		for (int j = 0; j < matrix.size; j++)
		{
			printf("%d\t", matrix.A[i][j]);
		}
		printf("\n");
	}
}
