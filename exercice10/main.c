#include "matrix.h"

int		main(void)
{
	t_matrix	m1;

	printf("Test1\n");
	m1 = create_matrix(3, 3, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
	print_matrix(m1);
	row_echelon(m1);
	print_matrix(m1);
	free_matrix(&m1);
	printf("===============================\n\n");

	t_matrix	m3;

	printf("\nTest2\n");
	m3 = create_matrix(2, 2, 1.0, 2.0, 3.0, 4.0);
	print_matrix(m3);
	row_echelon(m3);
	print_matrix(m3);
	free_matrix(&m3);
	printf("===============================\n\n");

	t_matrix	m5;

	printf("\nTest3\n");
	m5 = create_matrix(2, 2, 1.0, 2.0, 2.0, 4.0);
	print_matrix(m5);
	row_echelon(m5);
	print_matrix(m5);
	free_matrix(&m5);
	printf("===============================\n\n");
	
	t_matrix	m7;
	
	printf("\nTest4\n");
	m7 = create_matrix(4, 5, 8.0, 5.0, -2.0, 4.0, 28.0, 4.0, 2.5, 20.0, 4.0, -4.0, 8.0, 5.0, 1.0, 4.0, 17.0, 2.0, -5.0, 12.0, 4.0, -27.0);
	print_matrix(m7);
	row_echelon(m7);
	print_matrix(m7);
	free_matrix(&m7);
	printf("===============================\n\n");
	
	t_matrix	m9;
	
	printf("\nTest5\n");
	m9 = create_matrix(3, 5, 8.0, 5.0, -2.0, 4.0, 28.0, 4.0, 2.5, 20.0, 4.0, -4.0, 8.0, 5.0, 1.0, 4.0, 17.0);
	print_matrix(m9);
	row_echelon(m9);
	print_matrix(m9);
	free_matrix(&m9);
	printf("===============================\n\n");

	printf("\nTest6\n");
	t_matrix	m;
	m = create_matrix(4, 4, 0., 1., 1., 1., 0., 0., 0., 1., 0., 0., 0., 0., 1., 0., 0., 0.);
	print_matrix(m);
	row_echelon(m);
	print_matrix(m);
	free_matrix(&m);
	return (0);
}
