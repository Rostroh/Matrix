#include "matrix.h"

static void	*ft_memcpy(double *dst, const double *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

static void	*ft_memdup(const double *src, size_t len)
{
	void	*dst;

	dst = (void *)malloc(sizeof(double) * len);
	if (dst != NULL)
		dst = ft_memcpy(dst, src, len);
	return (dst);
}

static int	find_first_non_null(t_matrix m, int col, int row)
{
	int	j = row;

	if (col >= m.col)
		return (-1);
	for (j; j < m.row; j++)
	{
		if (*(m.data + j * m.col + col) != 0)
			return (j);
	}
	return (-1);
}

void	swap(t_matrix m, int r1, int r2)
{
	double *tmp = (double *)ft_memdup(m.data + r1 * m.col, m.col);
	ft_memcpy(m.data + r1 * m.col, m.data + r2 * m.col, m.col);
	ft_memcpy(m.data + r2 * m.col, tmp, m.col);
	free(tmp);
}

void		reduce_line(t_matrix m, int col, int row)
{
	double pivot = *(m.data + row * m.col + col);
	
	for (int i = col; i < m.col; i++)
		*(m.data + row * m.col + i) /= pivot;
}

void		substraction(t_matrix m, int r1, int r2, double scalar)
{
	for (int i = 0; i < m.col; i++)
		*(m.data + r1 * m.col + i) -= *(m.data + r2 * m.col + i) * scalar;
}

void		subs_line(t_matrix m, int col, int row)
{
	double	scalar = 0.;

	for (int j = 0; j < m.row; j++)
	{
		if (j != row)
		{
			scalar = *(m.data + j * m.col + col);
			substraction(m, j, row, scalar);
		}
	}
}

t_matrix	row_echelon(t_matrix m1)
{
	int	r;
	int	k;

	r = 0;
	for (int i = 0; i < m1.col; i++)
	{
		while ((k = find_first_non_null(m1, i, r)) == -1 && i < m1.col)
			i++;
		if (i >= m1.col || r >= m1.row)
			return (m1);
		if (r != k && k != -1)
			swap(m1, r, k);
		reduce_line(m1, i, r);
		subs_line(m1, i, r);
		r++;
	}
	return (m1);
}

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
			*(m3.data + i * m1.col + j - m1.col) = *(m2.data + i * m2.col + j);
		}
	}
	return (m3);
}
