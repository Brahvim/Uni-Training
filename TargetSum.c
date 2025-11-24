#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void find(int const *const p_array, int const p_length, int const p_targ) {
	int len = p_length;
	int *arr = malloc(sizeof(int) * p_length);
	memcpy(arr, p_array, sizeof(int) * p_length);

	for (size_t i = 0; i < len; i++) {

		int const first = arr[i];

		for (size_t j = 0; j < p_length; j++) {

			int const second = arr[j];
			if (first + second == p_targ) {

				printf("`%d` and `%d` in the array add to `%d`.\n", first, second, p_targ);
				arr[i] = arr[--len];
				arr[j] = arr[--len];
				--i;
				--j;
				break;

			}

		}

	}
}

int main() {
	int arr[] = { 4, 8, 2, 5, 3, 6, };
	find(
		arr,
		sizeof(arr) / sizeof(arr[0]),
		9
	);
}
