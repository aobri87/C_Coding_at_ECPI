#include <stdio.h>
void swapit(int *o, int *n);
main()
{
	int o, n;
	
	printf ("\nEnter the old weekly pay (in dollars):");
	scanf  ("%d", &o);
	
	printf ("\nEnter the new weekly pay (in dollars):");
	scanf  ("%d", &n);
	
	printf ("\n\nNew pay is initially equal to %d", n);
	printf ("\nOld pay is initially equal to %d", o);
	
	swapit(&o, &n);
	printf("\n\nNew pay is adjusted to %d\n", n);
	printf("Old pay is adjusted to %d\n", o);
	return 0;
}

void swapit(int *o, int *n)
{
	int I;
	I=*o;
	*o=*n;
	*n=I;
	
	return;
}
