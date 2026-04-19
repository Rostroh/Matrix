#include "matrix.h"

t_matrix	inverse(t_matrix m1)
{
	t_matrix	m2;

	m2.col = m1.col * 2;
	m2.row = m1.row;
	m2.data = (double*)malloc(sizeof(double) * m2.col * m2.row);
	for (int i = 0; i < m2.row; i++)
	{
		for (int j = 0; j < m2.col; j++)
		{
			if (j < m1.col)
				*(m2.data + i * m2.col + j) = *(m1.data + i * m1.col + j);
			else
				*(m2.data + m2.col * i + j) = (i == j - m1.col ? 1.0 : 0.0);
		}
	}
	m2 = row_echelon(m2);
	t_matrix  m3;

	m3.col = m1.col;
	m3.row = m1.row;
	m3.data = (double *)malloc(sizeof(double) * m3.col * m3.row);
	for (int i = 0; i < m3.row; i++)
	{
		for (int j = m1.col; j < m2.col; j++) {
			printf("%d - %d\n", i * m1.col + j - m1.col, i * m2.col + j);
			*(m3.data + i * m1.col + j - m1.col) = *(m2.data + i * m2.col + j);
		}
	}
	print_matrix(m3);
	return (m3);
}
