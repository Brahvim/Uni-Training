#include "Util.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// "Write a problem as a smaller one and forget the rest".
// *- Teach on recursion.*

// [ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... ]
size_t fibonacci(int const p_number) {
	if (p_number < 1) {

		return p_number;

	}
	else {

		return p_number + fibonacci(p_number - 1) + fibonacci(p_number - 2);

	}
}

int main(int const p_argc, char const *const p_argv[]) {
	printf("%d\n", fibonacci(5));
}
