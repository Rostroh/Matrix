#include "matrix.h"

int		main(void)
{
	printf("Test1:\n");
	t_matrix m1 = create_matrix(3, 3, 1., 2., -1., 2., 4., 3., 1., 1., 1.);
	
	print_matrix(m1);
	printf("deter = %f\n", determinent(m1));
	
	printf("\nTest2:\n");
	t_matrix m2 = create_matrix(2, 2, 1., -1., -1., 1.);

	print_matrix(m2);
	printf("deter = %f\n", determinent(m2));

	printf("\nTest3:\n");

	t_matrix m3 = create_matrix(3, 3, 2., 0., 0., 0., 2., 0., 0., 0., 2.);
	
	print_matrix(m3);
	printf("deter = %f\n", determinent(m3));

	printf("\nTest4:\n");

	t_matrix m4 = create_matrix(3, 3, 8., 5., -2., 4., 7., 20., 7., 6., 1.);
	print_matrix(m4);
	printf("deter = %f\n", determinent(m4));

	printf("\nTest5:\n");

	t_matrix m5 = create_matrix(4, 4, 8., 5., -2., 4., 4., 2.5, 20., 4., 8., 5., 1., 4., 28., -4., 17., 1.);
	print_matrix(m5);
	printf("deter = %f\n", determinent(m5));
	return (0);
}
