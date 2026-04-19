#include "matrix.h"

int		main(void)
{
	t_matrix	m1;
	t_matrix	m2;

	m1 = create_matrix(2, 3, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
	print_matrix(m1);
	m2 = transpose(m1);
	print_matrix(m2);
	return (0);
}
