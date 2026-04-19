#include "matrix.h"

int		main(void)
{
	t_vector	*tab;
	
	tab = (t_vector *)malloc(sizeof(t_vector) * 2);
	tab[0] = create_vector(3, 1.0, 2.0, 3.0);
	tab[1] = create_vector(3, 0.0, 10.0, -100.0);

	t_vector	coef;
	coef = create_vector(2, 10.0, -2.0);

	t_vector m3; 

	m3 = linear_combination(2, tab, coef);
	print_vector(m3);
	return (0);
}
