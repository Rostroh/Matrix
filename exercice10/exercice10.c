#include "matrix.h"

void	*ft_memcpy(double *dst, const double *src, size_t n)
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

void	*ft_memdup(const void *src, size_t len)
{
	void	*dst;

	dst = (void *)malloc(sizeof(void) * len);
	if (dst != NULL)
		dst = ft_memcpy(dst, src, len);
	return (dst);
}

t_matrix	row_echelon2(t_matrix m1)
{
	double		factor;
	uint32_t	col_id = 0;
	double		pivot = 0;
	t_matrix	m2;
	uint32_t	cur;

	m2.row = m1.row;
	m2.col = m1.col;
	m2.data = (double *)malloc(sizeof(double) * m2.row * m2.col);
	for (int i = 0; i < m1.row * m1.col; i++)
		*(m2.data + i) = *(m1.data + i);
	for (int r = 0; r < m2.row; r++)
	{
		//int r = 0;
		int i = r;
	//	printf("\n\n ITTERATION %d\n", r);
		while (*(m2.data + i * m2.col + col_id) == 0) {
            		i++;
            		if (i == m2.row) {
                		i = r;
               			col_id++;
                		if (col_id == m2.col)
                    			return m2;
            		}
		}
	//	printf("Col_id = %u i = %u et r = %d\n", col_id, i, r);
		if (i != r) {
	//		printf("           ---------------SWAP----------------\n");
			double *tmp = (double *)ft_memdup(m2.data + i * m2.col, m2.col);
			ft_memcpy(m2.data + i * m2.col, m2.data + r * m2.col, m2.col);
			ft_memcpy(m2.data + r * m2.col, tmp, m2.col);
		}
	//	if (pivot == 0)
		pivot = *(m2.data + r * m2.col + col_id);
	//	printf("pivot [%f] (%d) = [%f]\n", *(m2.data + r * m2.col + col_id), r * m2.col + col_id, pivot);
		for (int j = col_id; j < m2.col; j++)
			*(m2.data + r * m2.col + j) = *(m2.data + r * m2.col + j) / pivot;
	//	printf("Apres pivotage:\n");
		//if (r != 0) {
			for (int t = 0; t < r; t++)
			{
				factor = *(m2.data + t * m2.col + col_id) / *(m2.data + r * m2.col + col_id);
				for (int l = col_id; l < m2.col; l++) {
					*(m2.data + t * m2.col + l) = *(m2.data + t * m2.col + l) - factor * *(m2.data + r * m2.col + l);
				}
			}
		//}
		int k = i + 1;
		while (k < m2.row) {
			while (*(m2.data + k * m2.col + col_id) == 0) {
            			k++;
            			if (k == m2.row) {
                			k = r;
               				col_id++;
                			if (col_id == m2.col)
                    				return m2;
            			}
			}
			//printf("Ola %f\n", *(m2.data + k * m2.col + col_id));
			//printf("Col+1_id = %u %d %d\n", col_id, k, r);
			factor = *(m2.data + k * m2.col + col_id) / *(m2.data + r * m2.col + col_id);
			if (isnan(factor) || isinf(factor))
				break ;
			//printf("factor [%f](%d) / [%f](%d) = %f\n", *(m2.data + k * m2.col + col_id), k * m2.col + col_id, *(m2.data + r * m2.col + col_id), r * m2.col + col_id, factor);
			for (int j = col_id; j < m2.col; j++) {
			//	printf("l2 [%f](%d) - factor [%f] l1 [%f](%d) = [%f]\n", *(m2.data + k * m2.col + j), k * m2.col + j, factor, *(m2.data + k * col_id + j), i * m2.col + j, *(m2.data + i * m2.col + j) - factor * *(m2.data + k * m2.col + j));
				*(m2.data + k * m2.col + j) = *(m2.data + k * m2.col + j) - factor * *(m2.data + i * m2.col + j);
			//	printf("ret[%d] = %f\n", k * m2.col + j, *(m2.data + k * m2.col + j));
			}
			k++;
		}
	//	printf("i = %d r = %d row = %d\n", i, r, m1.row);
	}
	return (m2);
}

t_matrix	ref(t_matrix m1)
{
	double		factor;
	uint32_t	col_id = 0;
	double		pivot = 0;
	t_matrix	m2;
	uint32_t	cur;

	m2.row = m1.row;
	m2.col = m1.col;
	m2.data = (double *)malloc(sizeof(double) * m2.row * m2.col);
	for (int i = 0; i < m1.row * m1.col; i++)
		*(m2.data + i) = *(m1.data + i);
	for (int r = 0; r < m2.row; r++)
	{
		int i = r;
		while (*(m2.data + i * m2.col + col_id) == 0) {
            		i++;
            		if (i == m2.row) {
                		i = r;
               			col_id++;
                		if (col_id == m2.col)
                    			return m2;
            		}
		}
		if (i != r) {
			double *tmp = (double *)ft_memdup(m2.data + i * m2.col, m2.col);
			ft_memcpy(m2.data + i * m2.col, m2.data + r * m2.col, m2.col);
			ft_memcpy(m2.data + r * m2.col, tmp, m2.col);
		}
		pivot = *(m2.data + r * m2.col + col_id);
		//for (int j = col_id; j < m2.col; j++)
		//	*(m2.data + r * m2.col + j) = *(m2.data + r * m2.col + j) / pivot;
		int k = i + 1;
		while (k < m2.row) {
			while (*(m2.data + k * m2.col + col_id) == 0) {
            			k++;
            			if (k == m2.row) {
                			k = r;
               				col_id++;
                			if (col_id == m2.col)
                    				return m2;
            			}
			}
			factor = *(m2.data + k * m2.col + col_id) / *(m2.data + r * m2.col + col_id);
			if (isnan(factor) || isinf(factor))
				break ;
			for (int j = col_id; j < m2.col; j++) {
				*(m2.data + k * m2.col + j) = *(m2.data + k * m2.col + j) - factor * *(m2.data + i * m2.col + j);
			}
			k++;
		}
	}
	return (m2);
}
