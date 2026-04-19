#include "matrix.h"

static double	recur(uint32_t idx, t_vector v1, t_vector v2, int ret)
{
	if (idx == 0)
		return (fma(v1.data[idx], v2.data[idx], ret));
	return (recur(idx - 1, v1, v2, fma(v1.data[idx], v2.data[idx], ret)));
}

double		dot_product(t_vector v1, t_vector v2)
{
	if (v1.dim != v2.dim)
	{
		printf("Error\n");
		return (0);
	}
	return (recur(v1.dim, v2, v1, 0));
}
