#include "matrix.h"

int		main(void)
{
	printf("Test1\n");
	t_matrix	m1 = create_matrix(3, 3, 1., 0., 0., 0., 1., 0., 0., 0., 1.);

	print_matrix(inverse(m1));
	printf("\nTest2\n");
	t_matrix	m2 = create_matrix(3, 3, 2., 0., 0., 0., 2., 0., 0., 0., 2.);

	print_matrix(inverse(m2));
	printf("\nTest3\n");
	t_matrix	m3 = create_matrix(3, 3, 8., 5., -2., 4., 7., 20., 7., 6., 1.);

	print_matrix(inverse(m3));
	return (0);
}
