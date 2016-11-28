//The larger and nearlest number that can be aliquoted

#include <stdio.h>

int main(void)
{
	int j1, j2, j3, i1, i2, i3;
	
	i1 = 365, j1 = 7;
	i2 = 12258, j2 = 23;
	i3 = 996, j3 = 4;
	printf("The result of i1 is %i\n", i1 + j1 - i1 % j1);
	printf("The result of i2 is %i\n", i2 + j2 - i2 % j2);
	printf("The result of i3 is %i\n", i3 + j3 - i3 % j3);

	return 0;
}