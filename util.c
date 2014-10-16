/* some utlity functions */

#include "matrix.h"


/* swap two integers */

void swapint(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


/* swap two real numbers */

void swapfloat(float* a, float* b)
{
	float temp = *a;
	*a = *b;
	*b = temp;
}
