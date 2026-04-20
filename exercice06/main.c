#include "matrix.h"

int		main(void)
{
	//TEST1
	printf("Test1: \n");
	t_vector	v11;
	t_vector	v21;
	t_vector	v31;

	v11 = create_vector(3, 0.0, 0.0, 1.0);
	v21 = create_vector(3, 1.0, 0.0, 0.0);
	v31 = cross_product(v11, v21);
	print_vector(v31);
	
	//TEST2
	printf("\nTest2: \n");
	t_vector	v12;
	t_vector	v22;
	t_vector	v32;

	v12 = create_vector(3, 1.0, 2.0, 3.0);
	v22 = create_vector(3, 4.0, 5.0, 6.0);
	v32 = cross_product(v12, v22);
	print_vector(v32);
	
	//TEST3
	printf("\nTest3: \n");
	t_vector	v13;
	t_vector	v23;
	t_vector	v33;

	v13 = create_vector(3, 4.0, 2.0, -3.0);
	v23 = create_vector(3, -2.0, -5.0, 16.0);
	v33 = cross_product(v13, v23);
	print_vector(v33);
	return (0);
}
