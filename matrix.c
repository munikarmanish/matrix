/* Matrix manipulating functions. */

#include "matrix.h"

/* randomize() --- returns a random matrix of size n */
matrix randomize(int rows, int cols)
{
	matrix a;
	int i, j;

	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			a.m[i][j] = rand() % 10;

	a.rows = rows;
	a.cols = cols;

	return(a);
}


/* neg() --- returns the negative of given matrix */

matrix neg(matrix a)
{
	int i, j;
	for (i = 0; i < a.rows; i++)
		for (j = 0; j < a.cols; j++)
			a.m[i][j] *= (-1);
	return(a);
}

