#include "matrix.h"

int		main(void)
{
	//TEST1
	printf("\nTest1 :\n");
	double ret = lerp(0.0, 1.0, 0.0);
	printf("ret = %f\n", ret);

	//TEST2
	printf("\nTest2 :\n");
	ret = lerp(0.0, 1.0, 1.0);
	printf("ret = %f\n", ret);

	//TEST3
	printf("\nTest3 :\n");
	ret = lerp(0.0, 1.0, 0.5);
	printf("ret = %f\n", ret);
	
	//TEST4
	printf("\nTest4 :\n");
	ret = lerp(21.0, 42.0, 0.3);
	printf("ret = %f\n", ret);

	//TEST5
	printf("\nTest5 :\n");
	t_vector	v1;
	t_vector	v2;
	t_vector	v3;	
	v1 = create_vector(2, 2.0, 1.0);
	v2 = create_vector(2, 4.0, 2.0);
	print_vector(v1);
	print_vector(v2);
	v3 = lerp(v1, v2, 0.3);
	print_vector(v3);

	//TEST6
	printf("\nTest6 :\n");
	t_matrix	m1;
	t_matrix	m2;
	t_matrix	m3;
	m1 = create_matrix(2, 2, 2.0, 1.0, 3.0, 4.0);
	m2 = create_matrix(2, 2, 20.0, 10.0, 30.0, 40.0);
	m3 = lerp(m1, m2, 0.5);
	print_matrix(m3);	
}
