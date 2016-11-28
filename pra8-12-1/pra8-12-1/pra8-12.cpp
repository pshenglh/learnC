#include <stdio.h>
float array2[5][4];

void transposeMatrix(float array1[4][5], float array2[5][4])
{
	int row, colmn;

	for (row = 0; row < 4; row++)
		for (colmn = 0; colmn < 5; colmn++)
			array2[colmn][row] = array1[row][colmn];
}

int main(void)
{
	float array1[4][5] = {
	    { 11, 12, 13, 14, 15 },
	    { 21, 22, 23, 24, 25 },
	    { 31, 32, 33, 34, 35 },
	    { 41, 42, 43, 44, 45 }
    };
	int row, clomn;
	void transposeMatrix(float array1[4][5], float array2[5][4]);	
		

	transposeMatrix(array1, array2);

	for (row = 0; row < 5; row++) {
		for (clomn = 0; clomn < 4; clomn++)
			printf("%.2f   ", array2[row][clomn]);
		printf("\n");
	};
	
	return 0;
}