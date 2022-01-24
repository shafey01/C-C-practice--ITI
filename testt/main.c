/*
 ============================================================================
 Name        : compute.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int divide = 100 ;
	int divisor = 10;
	int quotien = 0;
	int remaind = 0;

	scanf("%d" , &divide);
	scanf( "%d", &divisor);

	quotien = divide / divisor;
	remaind = divide % divisor;

	printf("qution %d \n", quotien);
	printf("%d", remaind);



	return EXIT_SUCCESS;
}
