#include "matrix.h"

double		trace(t_matrix m)
{
	double		ret = 0;
	
	if (!is_matrix_squared(m))
	{
		printf("Error\n");
		return (0);
	}
	for (int i = 0; i < m.row; i++)
		ret += *(m.data + m.row * i + i);
	return (ret);
}
