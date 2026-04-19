#include "matrix.h"

int	main(void)
{
	t_vector	v1;
	t_vector	v2;
	
	v1 = create_vector(2, -1.0, 6.0);
	v2 = create_vector(2, 3.0, 2.0);
	double		ret = dot_product(v1, v2);
	printf("%f\n", ret);
	return (0);
}
