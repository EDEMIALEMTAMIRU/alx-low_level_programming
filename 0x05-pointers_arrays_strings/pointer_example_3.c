#include <stdio.h>
/**
 * main - solve mme
 * Return:0
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	printf("value of a: %d\n", *a);
	printf("address of &a: %p\n", &a);
	printf("value of a[0]: %d\n", a[0]);
	printf("address of &(*a): %p\n", &(*a));
	p = a + 1;
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;
	printf("value of p: %d\n", *p);
	printf("address of &p: %p\n", &p);
	return (0);
}
