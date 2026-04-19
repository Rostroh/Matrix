#include "matrix.h"

int		main(void)
{
	t_vector	v1;
	t_vector	v2;
	t_matrix	m1;

	v1 = create_vector(2, 4.0, 2.0);
	m1 = create_matrix(2, 2, 2.0, -2.0, -2.0, 2.0);
	v2 = mul_vec(m1, v1);
	print_vector(v2);

	t_matrix	m2;
	t_matrix	m3;

	m2 = create_matrix(3, 2, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
	m3 = create_matrix(2, 3, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0);
	t_matrix	m4;

	m4 = mul_mat(m2, m3);
	print_matrix(m4);

	t_matrix	m5;
	t_matrix	m6;

	m5 = create_matrix(2, 2, 3.0, -5.0, 6.0, 8.0);
	m6 = create_matrix(2, 2, 2.0, 1.0, 4.0, 2.0);
	t_matrix	m7;

	m7 = mul_mat(m5, m6);
	print_matrix(m7);
}
