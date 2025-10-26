#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>

typedef struct		s_vector
{
	uint32_t	k;
	long double	*data;
	uint32_t	dim;
}			t_vector;

typedef struct		s_matrix
{
	uint32_t 	k;
	long double	*data;
	uint32_t	row;
	uint32_t	col;
}			t_matrix;

void		print_matrix_shape(t_matrix m);
void		print_matrix_size(t_matrix m);
uint32_t	matrix_size(t_matrix m);
bool		is_matrix_squared(t_matrix m);
void		print_matrix(t_matrix m);
t_vector 	matrix_to_vector(t_matrix m);
#endif
