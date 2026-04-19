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
	return (m.col * m.row);
}

bool		is_matrix_squared(t_matrix m)
{
	return (m.col == m.row);
}

void		print_matrix(t_matrix m)
{
	for (int i = 0; i < m.row; i++) {
		if (i == 0)
			printf("┌ ");
		else if (i + 1 == m.row)
			printf("└ ");
		else
			printf("| ");
		for (int j = 0; j < m.col; j++)
			printf("%f ", *(m.data + i * m.col + j));
		if (i == 0)
			printf("┐");
		else if (i + 1 == m.row)
			printf("┘");
		else
			printf("|");
		printf("\n");
	}
}

t_vector 	matrix_to_vector(t_matrix m)
{
	t_vector	v;

	v.k = m.k;
	memcpy(v.data, m.data, m.col * m.row);
	v.dim = m.col * m.row;
	return (v);
}

t_matrix create_matrix(int row, int col, ...)
{
    	t_matrix m;
    	m.row = row;
    	m.col = col;
	
    	m.data = malloc(row * col * sizeof(double));
	va_list args;
    	va_start(args, col); 
    	for (int i = 0; i < row; i++) {
        	for (int j = 0; j < col; j++) {
            		*(m.data + i * col + j) = va_arg(args, double);
        	}
    	}
    	return (m);
}

void free_matrix(t_matrix *m)
{
    	free((void *)m->data);
    	m->data = NULL;
   	m->row = 0;
	m->col = 0;
}
