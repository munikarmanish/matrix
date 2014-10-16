/* The starting point of the program. */
#include "matrix.h"

int main(void)
{
	matrix a;
	int n;

	n = 2;

	srand(time(NULL));
	a = randomize(n, n);

	puts("\nA:"); 	
	display(a);

	puts("\n-A:"); 
	display(neg(a));

	puts("\nA+A:"); 
	display(sum(a, a));

	puts("\nA-A:");
	display(diff(a, a));

	puts("\nA*A:"); 
	display(product(a, a));

	puts("\nCof(A, 0, 0):");
	display(cofactor(a, 0, 0));

	printf("\nDet(A) = %d\n", det(a));

	puts("\nTranspose(A):");
	display(transpose(a));

	return (EXIT_SUCCESS);
}
