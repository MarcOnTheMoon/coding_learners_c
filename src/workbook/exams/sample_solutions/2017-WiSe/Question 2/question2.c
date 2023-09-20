/*****************************************************************************************************
 * Sample solution for lab exam.
 *****************************************************************************************************
 * Author: Marc Hensel, http://www.haw-hamburg.de/marc-hensel
 * Project: https://github.com/MarcOnTheMoon/coding_learners_c/
 * Copyright: 2023, Marc Hensel
 * Version: 2023.09.20
 * License: CC BY-NC-SA 4.0, see https://creativecommons.org/licenses/by-nc-sa/4.0/deed.en
 *****************************************************************************************************/

/* Inlcude files */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Type definitions */
typedef struct {
	double real;
	double imag;
} complex;

/* Function prototypes (provided by examiner) */
double absolute(complex a);
complex add(complex a, complex b);
complex multiply(complex a, complex b);

/* Main function (provided by examiner) */
int main(void)
{
	complex z1 = { 3., 4. };
	complex z2 = { 2.0, -1. };
	complex sum, product;

	/* Print complex numbers to the console */
	printf("Input data:\n");
	printf("z1 = %.1f %+.1fj\n", z1.real, z1.imag);
	printf("z2 = %.1f %+.1fj\n", z2.real, z2.imag);

	/* Absolute values */
	printf("\nAbsolute values:\n");
	printf("|z1| = %.3f\n", absolute(z1));
	printf("|z2| = %.3f\n", absolute(z2));

	/* Mathematical operations */
	printf("\nMathematical operations:\n");
	sum = add(z1, z2);
	product = multiply(z1, z2);
	printf("z1 + z2 = %.1f %+.1fj\n", sum.real, sum.imag);
	printf("z1 * z2 = %.1f %+.1fj\n", product.real, product.imag);

	getchar();
	return 0;
}

/* Absolute value |z| = sqrt(x^2 + y^2) of a complex number z = x + j*y */
double absolute(complex z)
{
	return sqrt(z.real * z.real + z.imag * z.imag);
}

/* Add two complex numbers (z = a + b) */
complex add(complex a, complex b)
{
	complex sum = {0., 0.};
	sum.real = a.real + b.real;
	sum.imag = a.imag + b.imag;
	return sum;
}

/* Multily two complex numbers (z = a * b) */
complex multiply(complex a, complex b)
{
	complex product;
	product.real = a.real * b.real - a.imag * b.imag;
	product.imag = a.real * b.imag + a.imag * b.real;
	return product;
}
