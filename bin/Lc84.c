#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#define sizearr(p_array) (sizeof(p_array) / sizeof(p_array[0]))

int main(int const p_argc, char const *p_argv[]) {
	int const arr[] = { 1, 3, 0, 0, 0, 0, 0, 4, };
	int const n = sizearr(arr);
	int to/*talEntries*/ = 0;
	int cur/*Count*/ = 0;
	int s = 0;
	int e = 0;

	while (e < n) {

		if (arr[e] != 0) {

			// $Range * Length$!
			to += (e - s) * (e - s + 1) / 2;
			// to += (cur * cur + 1) / 2;
			e++;

			s = e;
			cur = 0;

		}
		else {

			to++;
			e++;

		}

		if (arr[n - 1] == 0) {

			to += cur + cur;

		}

	}
}
