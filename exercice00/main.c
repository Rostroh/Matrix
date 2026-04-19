#include "matrix.h"

int		main(void)
{
	t_vector v1 = create_vector(3, 0.0, 1.0, 3.0);
	t_vector v2 = create_vector(3, 1.2, 5.3, -6.0);

	print_vector_shape(v1);
	print_vector_shape(v2);
	print_vector(v1);
	print_vector(v2);
	t_vector v3 = add_vector(v1, v2);
	print_vector(v3);
	t_vector v4 = sub_vector(v1, v2);
	print_vector(v4);
	t_vector v5 = vector_scalar(v1, 5);
	print_vector(v5);
	free_vector(&v1);
	free_vector(&v2);

	printf("Working on matrix\n");
	t_matrix m1 = create_matrix(3, 3, 1.1, 0.0, 0.0, 0.0, 1.1, 0.0, 0.0, 0.0, 1.1);
	t_matrix m2 = create_matrix(3, 3, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9);

	print_matrix_shape(m1);	
	print_matrix_shape(m2);
	print_matrix_size(m1);
	print_matrix_size(m2);
	print_matrix(m1);
	print_matrix(m2);
	printf("%d\n", is_matrix_squared(m1));
	t_matrix m3 = add_matrix(m1, m2);
	print_matrix(m3);
	t_matrix m4 = sub_matrix(m1, m2);
	print_matrix(m4);
	t_matrix m5 = matrix_scalar(m1, 5);
	print_matrix(m5);
	free_matrix(&m1);
	free_matrix(&m2);
	return (0);
}
