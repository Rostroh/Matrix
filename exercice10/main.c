#include "matrix.h"

int		main(void)
{
	t_matrix	m1;
	t_matrix	m2;

	m1 = create_matrix(3, 3, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
	print_matrix(m1);
	m2 = row_echelon(m1);
	print_matrix(m2);
	printf("===============================\n\n");

	t_matrix	m3;
	t_matrix	m4;

	m3 = create_matrix(2, 2, 1.0, 2.0, 3.0, 4.0);
	print_matrix(m3);
	m4 = row_echelon(m3);
	print_matrix(m4);
	printf("===============================\n\n");

	t_matrix	m5;
	t_matrix	m6;

	m5 = create_matrix(2, 2, 1.0, 2.0, 2.0, 4.0);
	print_matrix(m5);
	m6 = row_echelon(m5);
	print_matrix(m6);
	printf("===============================\n\n");
	
	t_matrix	m7;
	t_matrix	m8;
	
	m7 = create_matrix(4, 5, 8.0, 5.0, -2.0, 4.0, 28.0, 4.0, 2.5, 20.0, 4.0, -4.0, 8.0, 5.0, 1.0, 4.0, 17.0, 2.0, -5.0, 12.0, 4.0, -27.0);
	print_matrix(m7);
	m8 = row_echelon(m7);
	print_matrix(m8);
	printf("===============================\n\n");
	return (0);
}
