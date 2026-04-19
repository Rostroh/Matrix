#include "matrix.h"

int		main(void)
{
	t_vector	v1;
	t_vector	v2;

	v1 = create_vector(3, 1.0, 2.0, 3.0);
	v2 = create_vector(3, 4.0, 5.0, 6.0);
	printf("%f\n", angle_cos(v1, v2));
	return (0);
}
