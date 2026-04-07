#include "Util.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// "Write a problem as a smaller one and forget the rest".
// *- Teach on recursion.*

size_t search(
	int const *const p_array,
	size_t const p_length,
	int const p_number,
	size_t const p_first,
	size_t const p_last
) {
	size_t const mid = p_first + (p_last - p_first) / 2;
	size_t const first = search(p_array, p_length, p_number, p_first, mid);
	size_t const second = search(p_array, p_length, p_number, mid, p_last);

	if (p_first == p_last - 1) {

		if (p_number == p_array[p_first]) {

			return p_first;

		}
		else if (p_number == p_array[p_last]) {

			return p_last;

		}

	}
	else if (first == -1) {

		return second;

	}
	else {

		return first;

	}
}

int main(int const p_argc, char const *const p_argv[]) {
	int const arr[] = { 0, 1, 5, 8, 4, 7, 3, 2, };
	printf("%zu\n", search(arr, sizearr(arr), 8, 0, sizearr(arr)));
}
