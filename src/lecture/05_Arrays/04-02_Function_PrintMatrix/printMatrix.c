/*****************************************************************************************************
 * Lecture sample code.
 * 2-D array as function parameter.
 *****************************************************************************************************
 * Author: Marc Hensel, http://www.haw-hamburg.de/marc-hensel
 * Project: https://github.com/MarcOnTheMoon/coding_learners/
 * Copyright: 2023, Marc Hensel
 * Version: 2023.08.23
 * License: CC BY-NC-SA 4.0, see https://creativecommons.org/licenses/by-nc-sa/4.0/deed.en
 *****************************************************************************************************/

#include <stdio.h>

/* Prototypes */
void printMatrix3(int [][3], int);

/* Main function */
int main(void)
{
	int a[][3] = { { 20, 37, 10 }, { 16, 2, 14 } };

	printf("Print 2-D array to the console:\n");
	printMatrix3(a, 2);

	getchar();
	return 0;
}

/* Print 2-D array of size N x 3 to the console */
void printMatrix3(int a[][3], int rows)
{
	for (int y = 0; y < rows; y++)
	{
		for (int x = 0; x < 3; x++)
			printf("%2d ", a[y][x]);
		putchar('\n');
	}
}