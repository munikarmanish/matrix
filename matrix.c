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


/* sum() --- returns the sum of two matrices */

matrix sum(matrix a, matrix b)
{
	assert(a.rows == b.rows && a.cols == b.cols);

	int i, j;
	for (i = 0; i < a.rows; i++)
		for (j = 0; j < a.cols; j++)
			a.m[i][j] += b.m[i][j];

	return(a);
}


/* product() --- returns the product of two matrices */

matrix product(matrix a, matrix b)
{
	assert(a.cols == b.rows);

	int i, j, k;
	matrix c;

	for (i = 0; i < a.rows; i++) {
		for (j = 0; j < b.cols; j++) {
			c.m[i][j] = 0;
			for (k = 0; k < a.cols; k++)
				c.m[i][j] += (a.m[i][k] * b.m[k][j]);
		}
	}

	c.rows = a.rows;
	c.cols = b.cols;

	return(c);
}
