#include "matrix.h"

int		main(void)
{
	t_vector	*tab1;

	//TEST1
	printf("TEST 1: \n");
	tab1 = (t_vector *)malloc(sizeof(t_vector) * 3);
	tab1[0] = create_vector(3, 1.0, 0.0, 0.0);
	tab1[1] = create_vector(3, 0.0, 1.0, 0.0);
	tab1[2] = create_vector(3, 0.0, 0.0, 1.0);

	t_vector	coef1;
	
	coef1 = create_vector(3, 10.0, -2.0, 0.5);

	t_vector m1; 

	m1 = linear_combination(3, tab1, coef1);
	print_vector(m1);

	//TEST2
	printf("TEST 2: \n");
	t_vector	*tab2;
	
	tab2 = (t_vector *)malloc(sizeof(t_vector) * 2);
	tab2[0] = create_vector(3, 1.0, 2.0, 3.0);
	tab2[1] = create_vector(3, 0.0, 10.0, -100.0);

	t_vector	coef2;
	coef2 = create_vector(2, 10.0, -2.0);

	t_vector m2; 

	m2 = linear_combination(2, tab2, coef2);
	print_vector(m2);
	return (0);
}
