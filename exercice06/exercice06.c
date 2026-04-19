#include "matrix.h"

t_vector	cross_product(t_vector v1, t_vector v2)
{
	t_vector	v3;

	if (v1.dim != 3 || v2.dim != 3)
	{
		v3.dim = 0;
		printf("Error\n");
	}
	v3.dim = 3;
	v3.data = (double *)malloc(sizeof(double) * 3);
	v3.data[0] = v1.data[1] * v2.data[2] - v1.data[2] * v2.data[1];
	v3.data[1] = v1.data[2] * v2.data[0] - v1.data[0] * v2.data[2];
	v3.data[2] = v1.data[0] * v2.data[1] - v1.data[1] * v2.data[0];
	return (v3);
}
