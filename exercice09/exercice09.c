#include "matrix.h"

t_matrix	transpose(t_matrix m1)
{
	t_matrix	m2;

	m2.row = m1.col;
	m2.col = m1.row;
	print_matrix_shape(m1);
	print_matrix_shape(m2);
	m2.data = (double *)malloc(sizeof(double) * m2.row * m2.col);
	for (int i = 0; i < m1.col; i++)
	{
		for (int j = 0; j < m1.row; j++)
			*(m2.data + i * m2.col + j) = *(m1.data + j * m1.col + i);
	}
	return (m2);
}
