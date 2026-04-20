#include "matrix.h"

int		main(void)
{
	t_matrix	m1;
	t_matrix	m2;
	t_matrix	m3;
	t_matrix	m5;	
	t_matrix	m4;

	m1 = create_matrix(3, 3, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0);
	m2 = create_matrix(4, 4, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0);
	m3 = create_matrix(2, 2, 1.0, 0.0, 0.0, 1.0);
	m5 = create_matrix(3, 3, 2.0, -5.0, 0.0, 4.0, 3.0, 7.0, -2.0, 3.0, 4.0);
	m4 = create_matrix(3, 3, -2.0, -8.0, 4.0, 1.0, -23.0, 4.0, 0.0, 6.0, 4.0);
	
	
	printf("%f\n", trace(m1));
	printf("%f\n", trace(m2));
	printf("%f\n", trace(m3));
	printf("%f\n", trace(m5));
	printf("%f\n", trace(m4));	
	return (0);
}
