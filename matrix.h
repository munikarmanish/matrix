#ifndef _MATRIX_H
#define _MATRIX_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <math.h>

#define MAX_SIZE 5 /* Max size is 5*5 */

struct _matrix_ {
	int m[MAX_SIZE][MAX_SIZE];
	int rows;
	int cols;
}; 

typedef struct _matrix_ matrix;


/* File: matrix.c */
matrix	randomize(int rows, int cols);
matrix	sum(matrix a, matrix b);
matrix	neg(matrix a);
matrix	diff(matrix a, matrix b);
matrix	product(matrix a, matrix b);
matrix	cofactor(matrix a, int row, int col);
int 		det(matrix a);

/* File: display.c */
void		display(matrix a);

#endif
