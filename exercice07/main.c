#include "matrix.h"

int		main(void)
{
	//TEST1
	printf("Test 1:\n");
	t_vector	v11;
	t_vector	v21;
	t_matrix	m11;

	v11 = create_vector(2, 4.0, 2.0);
	m11 = create_matrix(2, 2, 1.0, 0.0, 0.0, 1.0);
	v21 = mul_vec(m11, v11);
	print_vector(v21);

	//TEST2
	printf("\nTest 2:\n");
	t_vector	v12;
	t_vector	v22;
	t_matrix	m12;

	v12 = create_vector(2, 4.0, 2.0);
	m12 = create_matrix(2, 2, 2.0, 0.0, 0.0, 2.0);
	v22 = mul_vec(m12, v12);
	print_vector(v22);

	//TEST3
	printf("\nTest 3:\n");
	t_vector	v13;
	t_vector	v23;
	t_matrix	m13;

	v13 = create_vector(2, 4.0, 2.0);
	m13 = create_matrix(2, 2, 2.0, -2.0, -2.0, 2.0);
	v23 = mul_vec(m13, v13);
	print_vector(v23);

	//TEST4
	printf("\nTest 4:\n");
	t_matrix	m14;
	t_matrix	m24;
	t_matrix	m34;

	m14 = create_matrix(2, 2, 1.0, 0.0, 0.0, 1.0);
	m24 = create_matrix(2, 2, 1.0, 0.0, 0.0, 1.0);
	m34 = mul_mat(m14, m24);
	print_matrix(m34);

	//TEST5
	printf("\nTest 5:\n");
	t_matrix	m15;
	t_matrix	m25;
	t_matrix	m35;

	m15 = create_matrix(2, 2, 1.0, 0.0, 0.0, 1.0);
	m25 = create_matrix(2, 2, 2.0, 1.0, 4.0, 2.0);
	m35 = mul_mat(m15, m25);
	print_matrix(m35);

	//TEST6
	printf("\nTest 6:\n");
	t_matrix	m16;
	t_matrix	m26;
	t_matrix	m36;

	m16 = create_matrix(2, 2, 3.0, -5.0, 6.0, 8.0);
	m26 = create_matrix(2, 2, 2.0, 1.0, 4.0, 2.0);
	m36 = mul_mat(m16, m26);
	print_matrix(m36);

	//TEST7
	printf("\nTest 7:\n");
	t_matrix	m2;
	t_matrix	m3;

	m2 = create_matrix(3, 2, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
	m3 = create_matrix(2, 3, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0);
	t_matrix	m4;

	m4 = mul_mat(m2, m3);
	print_matrix(m4);
}
