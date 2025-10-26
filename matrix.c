#include "matrix.h"

void		print_matrix_shape(t_matrix m)
{
	printf("{%d, %d}\n", m.col, m.row);
}

void		print_matrix_size(t_matrix m)
{
	printf("%d\n", m.col * m.row);
}

uint32_t	matrix_size(t_matrix m)
{
	return (m.col * m.row)
}

bool		is_matrix_squared(t_matrix m)
{
	return (m.col == m.row);
}

void		print_matrix(t_matrix m)
{
	for (int i = 0; i < m.row; i++) {
		for (j = 0; j < m.col; j++) {
			printf("%f ", *(m.data + i * m.col + j));
		printf("\n");
	}
}

t_vector 	matrix_to_vector(t_matrix m)
{
	t_vector	v;
	v.k = m.k;
	v.data = memcpy(m.data, m.col * n.row);
	v.dim = m.col * m.row;
	return (v);
}
