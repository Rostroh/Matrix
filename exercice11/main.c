#include "matrix.h"

int		main(void)
{
	t_matrix m1 = create_matrix(3, 3, 1., 2., -1., 2., 4., 3., 1., 1., 1.);

	print_matrix(m1);
	printf("deter = %f\n", determinent(m1));
	return (0);
}
