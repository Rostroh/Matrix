#include "matrix.h"

double		angle_cos(t_vector v1, t_vector v2)
{
	return (dot_product(v1, v2) / (norm(v1) * norm(v2)));
}

