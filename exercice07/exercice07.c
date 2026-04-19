#include "matrix.h"

static double 	recur(double *col, double *coef, uint32_t idx, uint32_t rate, double ret)
{
	//printf("%f %f\n", *(col + idx), *(coef + idx * rate));
	if (idx == 0) {
		return (fma(*col, *coef, ret));
	}
	return (recur(col, coef, idx - 1, rate, fma(*(col + idx), *(coef + idx * rate), ret)));
}

t_vector	mul_vec(t_matrix m, t_vector v1)
{
	t_vector v2;

	if (m.row != v1.dim)
	{
		v2.dim = -1;
		printf("Error\n");
		return (v2);
	}
	v2.dim = v1.dim;
	v2.data = (double *)malloc(sizeof(double) * v2.dim);
	for (int i = 0; i < v2.dim; i++)
		*(v2.data + i) = recur(m.data + i * m.col, v1.data, m.col - 1, 1, 0);
	return (v2);
}

t_matrix	mul_mat(t_matrix m1, t_matrix m2)
{
	t_matrix	m3;

	if (m1.col != m2.row)
	{
		m3.row = -1;
		m3.col = -1;
		printf("Error\n");
		return (m3);
	}
	m3.row = m2.row;
	m3.col = m1.col;
	m3.data = (double *)malloc(sizeof(double) * m3.row * m3.col);
	for (int i = 0; i < m2.row; i++) {
		for (int j = 0; j < m1.col; j++) {
			*(m3.data + i * m2.row + j) = recur(m1.data + i * m2.col, m2.data + j, m2.col - 1, m1.col, 0);
		}
	}
	return (m3);
}
