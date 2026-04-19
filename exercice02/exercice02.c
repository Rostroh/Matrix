#include "matrix.h"

double		lerp_d(double a, double b, double t)
{
	if (t > 1 || t < 0)
		printf("Error");
	return (fma(b - a, t, a));
}

t_vector	lerp_vector(t_vector a, t_vector b, double t)
{
	t_vector	v;

	if ((t > 1 || t < 0) || (a.dim != b.dim))
	{
		printf("Error");
		v.dim = 0;
		return (v);
	}
	v.dim = a.dim;
	printf("Ola\n");
	v.data = (double*)malloc(sizeof(double) * v.dim);
	for (int i = 0; i < v.dim; i++) {
		printf("%f - %f\n", b.data[i], a.data[i]);
		v.data[i] = fma(b.data[i] - a.data[i], t, a.data[i]);
	}
	return (v);
}

t_matrix	lerp_matrix(t_matrix a, t_matrix b, double t)
{
	t_matrix	m;

	if ((t > 1 || t < 0) || (a.row != b.row || a.col != b.col))
	{
		printf("Error");
		m.row = 0;
		m.col = 0;
		return (m);
	}
	m.row = a.row;
	m.col = b.col;
	m.data = (double*)malloc(sizeof(double) * m.col * m.row);
	for (int i = 0; i < m.row; i++) {
		for (int j = 0; j < m.col; j++) {
			*(m.data + i * m.col + j) = fma(*(b.data + i * m.col + j) - *(a.data + i * m.col + j), t, *(a.data + i * m.col + j));
		}
	}
	return (m);
}	
