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

#endif
