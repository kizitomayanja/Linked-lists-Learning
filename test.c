#include <stdio.h>
#include <math.h>

const int c = 3e8;

int main()
{
	unsigned char a=0x64;
	int b=0xFAFA;
	int c =100;

	printf("value of a: %X [%d]\n",a,a);
	printf("value of b: %X [%d]\nThe value of 100 in hexadecimal is %x",b,b,c);

	return 0;
}
