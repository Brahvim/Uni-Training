#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#define sizearr(p_array) (sizeof(p_array) / sizeof(p_array[0]))

int main() {
	int arr[] = { 12, 2, 9, 0, 100, 1, 1, 8, 2, 0, 3, 9, };

	int s = 0;
	int e = 0;
	int sumMax = 0;
	int sumCurrent = arr[0];
	int const sumNeeded = 12;

	while (e < sizearr(arr)) {

		if (sumCurrent == sumNeeded) {

#define winSize() e - s + 1

			if (e - s + 1 > sumNeeded) {

				sumMax = e - s + 1;
				e++; // We'll also read the LAST element...!
				sumCurrent += arr[e]; // Two ops; add latest elt and update sum.

			}
			else if (sumCurrent > sumNeeded) {

				sumCurrent -= arr[s];
				s++;

				if (s > e) { // Checking this instead of `s == e` earlier so the compiler waves the branch-pruning wand!

					// ...or the branch-predictor. Pick yo' poison.
					s++;
					e++;
					sumCurrent = arr[s];
					break;

					// TODO ???
					// None of this seems to work...

				}
				else {

					sumCurrent -= arr[s];
					s++;

				}

			}
			else {

				e++;
				sumCurrent += arr[e];

			}

		}

	}

	printf(
		"Largest window is `[%d, %d]` of size `%d`.\n",
		s,
		e,
		e - s + 1
	);

}
