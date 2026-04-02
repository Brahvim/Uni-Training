#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#define sizearr(p_array) (sizeof(p_array) / sizeof(p_array[0]))

int main() {
	int arr[] = { 2, 3, 7, 1, 4, 2, 2, 8, 6, 6, 0, };
	int bestValue = 12;
	int const k = 3; // Window size.
	int bestId = -1;

	for (size_t i = 0; i < sizearr(arr); i++) {

		int sum = 0;

		for (size_t j = 0; j < k; j++) {

			sum += arr[i + j];

		}

		if (sum == bestValue) {

			bestId = i;

		}

	}

	printf("Largest sum is in `[%d, %d]` range.\n", bestId, bestId + 3);

}
