#include "matrix.h"

// ADD V1 and V2 in V1
t_vector	add_vector(t_vector v1, t_vector v2)
{
	if (v1.dim != v2.dim) {
		printf("Vectors dimensions must be the same\n");
		v1.dim = 0;
		return (v1);
	}
	for (int i = 0; i < v1.dim; i++)
		*(v1.data + i) = *(v1.data + i) + *(v2.data + i);
	return (v1);
}

//SUB V1 and V2 in v1
t_vector	sub_vector(t_vector v1, t_vector v2)
{
	if (v1.dim != v2.dim)
	{
		printf("Vectors dimensions must be the same\n");
		v1.dim = 0;
		return (v1);
	}
	for (int i = 0; i < v1.dim; i++)
		*(v1.data + i) = *(v1.data + i) - *(v2.data + i);
	return (v1);
}


t_vector	vector_scalar(t_vector v1, int s)
{
	for (int i = 0; i < v1.dim; i++)
		*(v1.data + i) = *(v1.data + i) * s;
	return (v1);
}

t_matrix	add_matrix(t_matrix m1, t_matrix m2)
{
	if (m1.col != m2.col || m1.row != m2.row)
	{
		printf("Matrix should be the same dimensions\n");
		m1.col = 0;
		m1.row = 0;
		return (m1);
	}
	for (int i = 0; i < m1.col; i++)
	{
		for (int j = 0; j < m1.row; j++)
			*(m1.data + i * m1.row + j) += *(m2.data + i * m1.row + j);
	}
	return (m1);
}

t_matrix	sub_matrix(t_matrix m1, t_matrix m2)
{
	if (m1.col != m2.col || m1.row != m2.row)
	{
		printf("Matrix should be the same dimensions\n");
		m1.col = 0;
		m1.row = 0;
		return (m1);
	}
	for (int i = 0; i < m1.col; i++)
	{
		for (int j = 0; j < m1.row; j++)
			*(m1.data + i * m1.row + j) -= *(m2.data + i * m1.row + j);
	}
	return (m1);
}

t_matrix	matrix_scalar(t_matrix m1, int s)
{
	for (int i = 0; i < m1.col; i++)
	{
		for (int j = 0; j < m1.row; j++)
			*(m1.data + i * m1.row + j) *= s;
	}
	return (m1);
}
