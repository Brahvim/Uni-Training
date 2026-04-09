#include "Util.h"
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

// E.g.
// [
// 	[ ]
// 	[ 5 ]
// 	[ 5, 6 ]
// 	[ 5, 6, 7 ]
// 	[ 5, 7 ]
// 	[ 6, 7 ]
// 	[ 7 ]
// ], for [ 5, 6, 7 ].
// These can also be strings e.g. `"abc"`.

// Brute-forced:
// i[0] -----------------> i[l]
// 		j[i] ------------> j[l]
// 			 k[j] -------> k[l]

void attempt1(int const *const p_array, int const p_length) {
	// int set[p_length]; // ...Ehhh, stackalloc, yes-yes...

	for (size_t i = 0; i < p_length - 1; i++) {

		printf("%d ", p_array[i]);

		for (size_t j = i + 1; j < p_length; j++) {

			for (size_t k = j; k < p_length; k++) {

				for (size_t l = j; l <= k; l++) {

					printf("%d ", p_array[l]);

				}

				puts("");

			}

		}

	}

}

int main(int const p_argc, char const *const *p_argv) {
	int const arr[] = { 5, 6, 7 };
	int const len = sizearr(arr);
	attempt1(arr, len);
}
