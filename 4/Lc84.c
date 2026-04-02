#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#define sizearr(p_array) (sizeof(p_array) / sizeof(p_array[0]))

int main(int const p_argc, char const *p_argv[]) {
	int const arr[] = { 6, 8, 0, 1, 3 };
	int const len = sizearr(arr);
	int rollback = 0;
	puts("[ ");

	for (size_t i = 0; i < len; i++) {

		if (arr[i] > arr[rollback]) {

			printf("%d ", arr[i]);
			i = rollback;
			++rollback;
			continue;

		}
		else if (i >= len) {

			i = rollback;
			puts("-1 ");

			if (rollback == len) {

				break;

			}

			++rollback;
			continue;

		}

	}

	puts(" ]");
	exit(EXIT_SUCCESS);
}
