#include "matrix.h"

int		main(void)
{
	//VECTORS 
	t_vector v1 = create_vector(3, 0.0, 1.0, 3.0);
	t_vector v2 = create_vector(3, 1.2, 5.3, -6.0);

	printf("Working on vectors\n");

	//Vector's shape
	printf("Printing shape :\n");
	print_vector_shape(v1);
	print_vector_shape(v2);

	//Vector's data
	printf("\nPrinting vectors\n");
	print_vector(v1);
	print_vector(v2);

	//Addition
	printf("\nAdditions :\n");
	print_vector(v1);
	printf(" + \n");
	print_vector(v2);
	add_vector(v1, v2);
	print_vector(v1);
	
	//Substraction
	printf("\nSubstraction :\n");
	print_vector(v1);
	printf(" - \n");
	print_vector(v2);
	sub_vector(v1, v2);
	print_vector(v1);

	//Multiplication by scalar
	printf("\nMultiplication :\n");
	print_vector(v1);
	printf(" * 5\n");
	vector_scalar(v1, 5);
	print_vector(v1);
	free_vector(&v1);
	free_vector(&v2);

	//MATRIX 
	printf("\n\nWorking on matrix\n");
	t_matrix m1 = create_matrix(3, 3, 1.1, 0.0, 0.0, 0.0, 1.1, 0.0, 0.0, 0.0, 1.1);
	t_matrix m2 = create_matrix(3, 3, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9);

	//Matrix's shape
	printf("Matrix shape : \n");
	print_matrix_shape(m1);	
	print_matrix_shape(m2);

	//Matrix's size
	printf("\nMatrix size :\n");
	print_matrix_size(m1);
	print_matrix_size(m2);

	//Matrix's data
	printf("\nPrinting matrix\n");
	print_matrix(m1);
	print_matrix(m2);

	//Is the matrix squared
	printf("\nMatrix squared ?\n");
	printf("%d\n", is_matrix_squared(m1));
	
	//Addition
	printf("\nAddition :\n");
	print_matrix(m1);
	printf(" + \n");
	print_matrix(m2);
	add_matrix(m1, m2);
	print_matrix(m1);

	//Substraction
	printf("\nSubstraction :\n");
	print_matrix(m1);
	printf(" - \n");
	print_matrix(m2);
	sub_matrix(m1, m2);
	print_matrix(m1);

	//Matrix scalar
	printf("\nMultiplication :\n");
	print_matrix(m1);
	printf(" * 5\n");
	matrix_scalar(m1, 5);
	print_matrix(m1);
	free_matrix(&m1);
	free_matrix(&m2);
	return (0);
}
