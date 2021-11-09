#include <stdio.h>

int main() 
{	
	int value[5];
	
	printf("%s", "Enter 437 five times: ");
	scanf("%d %i %o %u %x", &value[0], &value[1], &value[2], &value[3], &value[4]);
	
	printf("Read with %%d: \n");
	printf("%d %i %o %u %x\n\n", value[0], value[0], value[0], value[0], value[0]);
	
	printf("Read with %%i: \n");
	printf("%d %i %o %u %x\n\n", value[1], value[1], value[1], value[1], value[1]);
	
	printf("Read with %%o: \n");
	printf("%d %i %o %u %x\n\n", value[2], value[2], value[2], value[2], value[2]);
	
	printf("Read with %%u: \n");
	printf("%d %i %o %u %x\n\n", value[3], value[3], value[3], value[3], value[3]);
	
	printf("Read with %%x: \n");
	printf("%d %i %o %u %x\n\n", value[4], value[4], value[4], value[4], value[4]);
	
	return 0;
}


