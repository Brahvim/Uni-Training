#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
	int arr[] = { 4, 8, 2, 5, 3, 6, };
	size_t const len = sizeof(arr) / sizeof(arr[0]);

	int best = INT32_MIN;

	for (size_t i = 0; i < len; i++) {

		if (arr[i] > best) {

			best = arr[i];

		}

	}

	int best2 = INT32_MIN;

	for (size_t i = 0; i < len; i++) {

		if (arr[i] > best2 && arr[i] != best) {

			best2 = arr[i];

		}

	}

	printf("Second largest: `%d`.\n", best2);
}
