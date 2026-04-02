#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[] = { 4, 8, 9, 4, 7, 6, };
	int const len = sizeof(arr) / sizeof(arr[0]);

	int *done = calloc(len, sizeof(int));
	size_t doneLen = 0;

	// Could use a hash-set, but it'll not lower elements to iterate over without having ANY non-unique ones,
	// Could use `XOR` but be unable to count zeroes. This is easily the most naive method:

	for (size_t i = 0; i < len; i++) {

		char wasDone = 0;
		int const elt = arr[i];

		for (size_t j = 0; j < doneLen; j++) {

			if (done[j] == elt) {

				wasDone = 1;
				break;

			}

		}

		if (wasDone) {

			continue;

		}

		int count = 0;
		for (size_t j = i; j < len; j++) {

			if (arr[j] == elt) {

				++count;

			}

		}

		printf("%d was seen %d times.\n", elt, count);
		done[doneLen++] = elt;

	}

	free(done);
}

