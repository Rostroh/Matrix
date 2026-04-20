#ifndef MATRIX_H
#define MATRIX_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

typedef struct		s_vector
{
	uint32_t	k;
	double		*data;
	int		dim;
}			t_vector;

typedef struct		s_matrix
{
	uint32_t 	k;
	double		*data;
	int		row;
	int		col;
}			t_matrix;

//vector.c
void		print_vector(t_vector v);
void		print_vector_shape(t_vector v);
t_matrix 	vector_to_matrix(t_vector v, uint32_t row, uint32_t col);
t_vector	create_vector(int dim, ...);
void		free_vector(t_vector *v);

//matrix.c
void		print_matrix_shape(t_matrix m);
void		print_matrix_size(t_matrix m);
uint32_t	matrix_size(t_matrix m);
bool		is_matrix_squared(t_matrix m);
void		print_matrix(t_matrix m);
t_vector 	matrix_to_vector(t_matrix m);
t_matrix	create_matrix(int row, int col, ...);
void		free_matrix(t_matrix *m);

//EXERCICE00
t_vector	add_vector(t_vector v1, t_vector v2);
t_vector	sub_vector(t_vector v1, t_vector v2);
t_vector	vector_scalar(t_vector v1, int s);
t_matrix	add_matrix(t_matrix m1, t_matrix m2);
t_matrix	sub_matrix(t_matrix m1, t_matrix m2);
t_matrix	matrix_scalar(t_matrix m1, int s);

//EXERCICE01
t_vector	linear_combination(uint32_t k, t_vector *u, t_vector coef);

//EXERCICE02
double		lerp_d(double a, double b, double t);
t_vector	lerp_vector(t_vector a, t_vector b, double t);
t_matrix	lerp_matrix(t_matrix a, t_matrix b, double t);

#define lerp(a, b, t) _Generic((a), \
    double: lerp_d, \
    t_vector: lerp_vector, \
    t_matrix: lerp_matrix \
)(a, b, t)

//EXERCICE03
double		dot_product(t_vector v1, t_vector v2);

//EXERCICE04
double		norm_1(t_vector v);
double		norm(t_vector v);
double		norm_inf(t_vector v);

//EXERCICE05
double		angle_cos(t_vector v1, t_vector v2);

//EXERCICE06
t_vector	cross_product(t_vector v1, t_vector v2);

//EXERCICE07
t_vector	mul_vec(t_matrix m, t_vector v);
t_matrix	mul_mat(t_matrix m1, t_matrix m2);

//EXERCICE08
double		trace(t_matrix m);

//EXERCICE09
t_matrix	transpose(t_matrix m1);

//EXERCICE10
t_matrix	row_echelon(t_matrix m1);
t_matrix	ref(t_matrix m1);

//EXERCICE11
double		determinent(t_matrix m1);

//EXERCICE12
t_matrix	inverse(t_matrix m1);

//EXERCICE13
uint32_t	rank(t_matrix m1);
#endif
