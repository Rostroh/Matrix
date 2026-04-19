#include "matrix.h"

double		recur(uint32_t k, t_vector *u, int idx, t_vector coef, int start, double ret)
{
	//printf("data = %f, coef = %f, ret = %f, fma = %f\n", u->data[idx], coef.data[start - k], ret, fma(u->data[idx], coef.data[start - k], ret));
	if (k == 1)
		return (fma(u->data[idx], coef.data[start - k], ret));
	return (recur(k - 1, (void *)u + sizeof(t_vector), idx, coef, start, fma(u->data[idx], coef.data[start - k], ret)));
}

t_vector	linear_combination(uint32_t k, t_vector *u, t_vector coef)
{
	t_vector	ret;

	if (coef.dim != k)
	{
		printf("Coeff must k dimensionned\n");
		ret.dim = 0;
		return (ret);
	}

	ret.dim = u[0].dim;
	printf("dim = %d\n", ret.dim);
	ret.data = (double *)malloc(sizeof(double) * ret.dim);
	for (int i = 0; i < ret.dim; i++)
		ret.data[i] = recur(k, u, i, coef, k, 0.0);
	return (ret);
}

