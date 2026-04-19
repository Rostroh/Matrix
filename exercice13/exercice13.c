#include "matrix.h"

uint32_t		rank(t_matrix m1)
{
	int		sum;
	t_matrix	m2;
	int		r = m1.row;

	m2 = row_echelon(m1);
	print_matrix(m2);
	for (int i = 0; i < m2.row; i++)
	{
		int j = 0;
		while (*(m2.data + i * m2.col + j) == 0)
		{
			j++;
			if (j > m2.col)
			{
				r--;
				break;
			}
		}
		
	}
	return (r);
}
