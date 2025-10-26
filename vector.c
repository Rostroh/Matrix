#include "matrix.h"

void	print_vector_shape(t_vector v)
{
	print("%d", v.dim);	
}

void	print_vector(t_vector v)
{
	printf("{");
	for (i = 0; i < v.dim; i++) {
		printf("%f ", *(v.data + i));
	}
	printf("}");
}

t_matrix vector_to_matrix(t_vector v, uint32_t row, uint32_t col)
{
	if (row * col != v.dim)
		printf("Dimension error. Dimension must be of format row x col\n");
	t_matrix	m;

	m.k = v.k;
	m.data = memcpy(v.data, v.dim);
	m.row = row;
	m.col = col;
}
