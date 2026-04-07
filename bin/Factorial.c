#include "Util.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// "Write a problem as a smaller one and forget the rest".
// *- Teach on recursion.*

int factorial(int const p_number) {
	if (p_number == 1) {

		return 1;

	}
	else {

		return p_number * factorial(p_number - 1);

	}
}

int main(int const p_argc, char const *const p_argv[]) {
	printf("%d\n", factorial(5));
}
