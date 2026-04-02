#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool odd(size_t const x);
bool even(size_t const x);

bool odd(size_t const p_input) {
	if (p_input <= 0) {

		return true;

	}

	puts("Odd.");
	// return even(--p_input);
	return even(p_input - 1);
}

bool even(size_t const p_input) {
	if (p_input <= 0) {

		return false;

	}

	puts("Even.");
	// return odd(--p_input);
	return odd(p_input - 1);
}

int main(int const p_argCount, char const const *const p_argValues[]) {
	// exit(EXIT_SUCCESS);
	// even(3);
	odd(4);
}
