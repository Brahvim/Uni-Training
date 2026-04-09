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

int* attempt1(int const *const p_array, int const p_length) {
	for (size_t i = 0; i < p_length; i++) {

		puts("[ ");

		for (size_t j = 0; j < p_length; j++) {

			int index = j + i + 1;

			if (index == i) {

				break;

			}
			else if (index > p_length) {

				index -= p_length;

			}
			else {

				printf("%d ", p_array[index]);

			}

		}

		puts(" ]");

	}
}

int* solutionFromTeacher(int const *const p_array, int const p_length) {
	for (size_t i = 0; i < p_length; i++) {

		puts("[ ");

		for (size_t j = i; j < p_length; j++) {

			for (size_t k = 0; k < i + 1; k++) {

				if (j == i) {

					break;

				}
				else if (j > p_length) {

					j = 0;

				}
				else {

					printf("%d ", p_array[j]);

				}

			}

			puts(" ]");

		}
	}
}

int main(int const p_argc, char const *const *p_argv) {
	int const arr[] = { 5, 6, 7 };
	int const len = sizearr(arr);
	attempt1(arr, len);
}
