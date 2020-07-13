#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[]){

	FILE *file1, *file2;
	int n1, n2, result;
	
	file1 = fopen(argv[1], "r");
	file2 = fopen(argv[2], "r");

	
	fscanf(file1, "%x", &n1);

	unsigned short data_1 = n1;
	unsigned short *p_1 = (unsigned short*)&data_1;

	fscanf(file2, "%x", &n2);

	unsigned short data_2 = n2;
	unsigned short *p_2 = (unsigned short*)&data_2;
	
	result = *p_1 + *p_2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", *p_1, *p_1, *p_2, *p_2, result, result);	
	
	return 0;
	
}
