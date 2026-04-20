#include "matrix.h"

int		main(void)
{
	//TEST1
	printf("Test 1:\n");
	t_vector	v11;
	t_vector	v21;

	v11 = create_vector(2, 1.0, 0.0);
	v21 = create_vector(2, 1.0, 0.0);
	printf("%f\n", angle_cos(v11, v21));
	
	//TEST2
	printf("\nTest 2:\n");
	t_vector	v12;
	t_vector	v22;

	v12 = create_vector(2, 1.0, 0.0);
	v22 = create_vector(2, 0.0, 1.0);
	printf("%f\n", angle_cos(v12, v22));
	
	//TEST3
	printf("\nTest 3:\n");
	t_vector	v13;
	t_vector	v23;

	v13 = create_vector(2, -1.0, 1.0);
	v23 = create_vector(2, 1.0, -1.0);
	printf("%f\n", angle_cos(v13, v23));
	
	//TEST4
	printf("\nTest 4:\n");
	t_vector	v14;
	t_vector	v24;

	v14 = create_vector(2, 2.0, 1.0);
	v24 = create_vector(2, 4.0, 2.0);
	printf("%f\n", angle_cos(v14, v24));
	
	//TEST5
	printf("\nTest 5:\n");
	t_vector	v15;
	t_vector	v25;

	v15 = create_vector(3, 1.0, 2.0, 3.0);
	v25 = create_vector(3, 4.0, 5.0, 6.0);
	printf("%f\n", angle_cos(v15, v25));
	return (0);
}
