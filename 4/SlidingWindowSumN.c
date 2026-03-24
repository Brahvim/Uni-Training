#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#define sizearr(p_array) (sizeof(p_array) / sizeof(p_array[0]))

int main() {
	int arr[] = { 3, 7, 11, 0, 2, 9, 13, 6, 8, 0 };
	int const k = 3; // Window size.
	int bestValue = INT32_MIN;
	int bestId = -1;

	for (size_t i = 0; i < sizearr(arr); i++) {

		int const sum =
			arr[i + 0]
			+
			arr[i + 1]
			+
			arr[i + 2]
			; // Pfft. Cheap.

		if (sum > bestValue) {

			bestValue = sum;
			bestId = i;

		}

	}

	printf("Largest sum is in `[%d, %d]` range.\n", bestId, bestId + 3);

}
