#include "matrix.h"

int		main(void)
{
	t_vector	v1;
	t_vector	v2;
	t_vector	v3;

	v1 = create_vector(3, 4.0, 2.0, -3.0);
	v2 = create_vector(3, -2.0, -5.0, 16.0);
	v3 = cross_product(v1, v2);
	print_vector(v3);
	return (0);
}
