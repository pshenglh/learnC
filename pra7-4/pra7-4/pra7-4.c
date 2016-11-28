//The avarage of ten float digit 

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{	
	float average, sum = 0, number, floatArray[10];
	int index;

	printf("Enter ten float number: \n");
	for (index=0; index <= 9; ++index){
		scanf("%f", &floatArray[index]);
	}

	for (index = 0; index <= 9; ++index) {
		sum += floatArray[index];
	}
	average = sum / 10;
	printf("The average is: %f", average);

	return 0;
}