#include "matrix.h"

int		main(void)
{
	t_matrix m1 = create_matrix(3, 4,  1., 2., 0., 0., 2., 4., 0., 0., -1., 2., 1., 1.);
	t_matrix m2 = create_matrix(4, 3, 8., 5., -2., 4., 7., 20., 7., 6., 1., 21., 18., 7.);

	printf("%u\n", rank(m1));
	printf("%u\n", rank(m2));
}
