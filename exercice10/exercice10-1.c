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

	printf("j = %d row = %d, col = %d\n", j, row, col);
	if (col >= m.col)
		return (-1);
	for (j; j < m.row; j++)
	{
		if (*(m.data + j * m.col + col) != 0)
		{
			printf("Found %f\n", *(m.data + j * m.col + col));
			return (j);
		}
	}
	return (-1);
}

void	swap(t_matrix m, int r1, int r2)
{
	printf("Swap %d with %d size %d and %d in %d\n", r1, r2, r1 * m.col, r2 * m.col, m.row * m.col);
	double *tmp = (double *)ft_memdup(m.data + r1 * m.col, m.col);
	ft_memcpy(m.data + r1 * m.col, m.data + r2 * m.col, m.col);
	ft_memcpy(m.data + r2 * m.col, tmp, m.col);
	free(tmp);
}

void		reduce_line(t_matrix m, int col, int row)
{
	double pivot = *(m.data + row * m.col + col);
	
	printf("Pivot = %d pour col = %d et row = %d\n", pivot, col, row);
	print_matrix(m);
	for (int i = col; i < m.col; i++)
		*(m.data + row * m.col + i) /= pivot;
}

void		substraction(t_matrix m, int r1, int r2, double scalar)
{
	for (int i = 0; i < m.col; i++)
	{
		*(m.data + r1 * m.col + i) -= *(m.data + r2 * m.col + i) * scalar;
	}
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
		print_matrix(m1);
		while ((k = find_first_non_null(m1, i, r)) == -1 && i < m1.col)
		{
			printf("Fully null\n");
			i++;
		}
		if (i >= m1.col || r >= m1.row)
			return (m1);
			//printf("Uhoh !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
		if (r != k && k != -1)
		{
			printf("Must swap %d %d\n", r, k);
			swap(m1, r, k);
		}
		reduce_line(m1, i, r);
		subs_line(m1, i, r);
		r++;
	}
	return (m1);
}
