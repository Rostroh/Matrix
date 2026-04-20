#include "matrix.h"

int		main(void)
{
	t_vector	v0;
	t_vector	v1;
	t_vector	v2;

	v0 = create_vector(3, 0, 0, 0);
	v1 = create_vector(3, 1.0, 2.0, 3.0);
	v2 = create_vector(2, -1.0, -2.0);

	printf("v0 %f %f %f\n", norm_1(v0), norm(v0), norm_inf(v0));
	printf("v1 %f %f %f\n", norm_1(v1), norm(v1), norm_inf(v1));
	printf("v2 %f %f %f\n", norm_1(v2), norm(v2), norm_inf(v2));
	return (0);
}
