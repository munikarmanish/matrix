/* The starting point of the program. */
#include "matrix.h"

int main(void)
{
	matrix a;
	int n;

	n = 2;

	srand(time(NULL));
	a = randomize(n, n);

	puts("\nA:"); display(a);
	puts("\n-A:"); display(neg(a));

	return (EXIT_SUCCESS);
}
