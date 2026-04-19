#include "matrix.h"

int		main(void)
{/*
	double ret = lerp(0.0, 1.0, 0.0);
	printf("ret = %f\n", ret);
	ret = lerp(0.0, 1.0, 1.0);
	printf("ret = %f\n", ret);
	ret = lerp(0.0, 1.0, 0.5);
	printf("ret = %f\n", ret);
	ret = lerp(21.0, 42.0, 0.3);
	printf("ret = %f\n", ret);*/

	t_vector	v1;
	t_vector	v2;
	t_vector	v3;	
	v1 = create_vector(2, 2.0, 1.0);
	v2 = create_vector(2, 4.0, 2.0);
	print_vector(v1);
	print_vector(v2);
	v3 = lerp(v1, v2, 0.3);
	print_vector(v3);

	t_matrix	m1;
	t_matrix	m2;
	t_matrix	m3;
	m1 = create_matrix(2, 2, 2.0, 1.0, 3.0, 4.0);
	m2 = create_matrix(2, 2, 20.0, 10.0, 30.0, 40.0);
	print_matrix(m1);
	print_matrix(m2);
	m3 = lerp(m1, m2, 0.5);
	print_matrix(m3);	
}
