#include "matrix.h"

int	main(void)
{
	//TEST1
	t_vector	v11;
	t_vector	v21;
	
	printf("Test 1:\n");
	v11 = create_vector(2, 0.0, 0.0);
	v21 = create_vector(2, 1.0, 1.0);
	double		ret1 = dot_product(v11, v21);
	printf("%f\n", ret1);

	//TEST2
	t_vector	v12;
	t_vector	v22;
	
	printf("\nTest 2:\n");
	v12 = create_vector(2, 1.0, 1.0);
	v22 = create_vector(2, 1.0, 1.0);
	double		ret2 = dot_product(v12, v22);
	printf("%f\n", ret2);

	//TEST3 
	t_vector	v13;
	t_vector	v23;
	
	printf("\nTest 3:\n");
	v13 = create_vector(2, -1.0, 6.0);
	v23 = create_vector(2, 3.0, 2.0);
	double		ret3 = dot_product(v13, v23);
	printf("%f\n", ret3);
	return (0);
}
