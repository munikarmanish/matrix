/* Functions to display matrices. */

#include "matrix.h"

void display(matrix a)
{
	int i, j;

	for (i = 0; i < a.rows; i++) {
		printf(" [");
		for (j = 0; j < a.cols; j++)
			printf("%4d", a.m[i][j]);
		printf(" ]\n");
	}
}
