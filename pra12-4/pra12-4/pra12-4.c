#include <stdio.h>

 int int_size(void)
{
	unsigned int a;
	int b = 0;

	a = ~0;

	do {
		a /= 2;
		b += 1;
	} while (a != 0);


	return b;
}

 unsigned int rotate(unsigned int value, int n)
 {
	 int int_size(void);
	 unsigned int result, bits;
	 int size = int_size();
	 
	 if (n > 0)
		 n = n % size;
	 else
		 n = -(-n % size);
	 

	 if (n == 0)
		 result = value;
	 else if (n > 0)
	 {
		 bits = value >> (size - n);
		 result = value << n | bits;
	 }

	 else
	 {
		 n = -n;
		 bits = value << (size - n);
		 result = value >> n | bits;
	 }

	 return result;
 }

 int main(void)
 {
	 unsigned int w1 = 0xabcdef00u;
	 unsigned int rotate(unsigned int value, int n);

	 printf("%x\n", rotate(w1, 8));

	 return 0;
 }