#include "matrix.h"

static double	absv(double val)
{
	return (val < 0 ? val * -1 : val);
}

double		norm_1(t_vector v)
{
	double	ret = 0;

	for (int i = 0; i < v.dim; i++)
		ret += absv(v.data[i]);
//		ret += (v.data[i] < 0 ? v.data[i] * -1 : v.data[i]);
	return (ret);
}

double		norm(t_vector v)
{
	double	ret = 0;

	for (int i = 0; i < v.dim; i++)
		ret += pow(v.data[i], 2);
	return (sqrt(ret));
}

double	 	norm_inf(t_vector v)
{
	if (v.dim == 0)
		return (0);

	double	ret = absv(v.data[0]);
	for (int i = 0; i < v.dim; i++) {
		if (ret < absv(v.data[i]))
			ret = absv(v.data[i]);
	}
	return (ret);
}
