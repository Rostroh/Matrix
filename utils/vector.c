#include "matrix.h"

void	print_vector_shape(t_vector v)
{
	printf("%d\n", v.dim);	
}

void	print_vector(t_vector v)
{
	printf("{");
	for (int i = 0; i < v.dim; i++) {
		printf("%f", *(v.data + i));
		if (i + i < v.dim)
			printf(" ");
	}
	printf("}\n");
}

t_matrix vector_to_matrix(t_vector v, uint32_t row, uint32_t col)
{
	if (row * col != v.dim)
		printf("Dimension error. Dimension must be of format row x col\n");
	t_matrix	m;

	m.k = v.k;
	memcpy(m.data, v.data, v.dim);
	m.row = row;
	m.col = col;
	return (m);
}

t_vector create_vector(int dim, ...)
{
    	t_vector v;
    	v.k = 0;
   	v.dim = dim;
   	v.data = malloc(sizeof(double) * dim);

	if (!v.data)
    	{
       		perror("malloc failed");
        	v.dim = 0;
        	return (v);
    	}

    	va_list args;
    	va_start(args, dim);

    	for (int i = 0; i < dim; i++) {
        	v.data[i] = va_arg(args, double);
	}
    	va_end(args);
    	return (v);
}

void free_vector(t_vector *v)
{
    	if (v->data)
        	free((void *)v->data);
    	v->data = NULL;
 	v->dim = 0;
}
