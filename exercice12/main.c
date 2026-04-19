#include "matrix.h"

int		main(void)
{
	t_matrix	m1 = create_matrix(2, 2, 2., 1., 5., 3.);

	inverse(m1);
	return (0);
}
