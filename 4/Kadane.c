#include "Util.h"
#include <math.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#pragma region Types.
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
#pragma endregion

// Kadane's algorithm helps find a "max subarray".

i16 maxSubArr(i16 const *const p_array, size_t const p_size) {
	i16 summax = p_array[0];
	i16 sum = 0;

	for (i16 i = 0; i < p_size; i++) {

		i16 const n = p_array[i];

		sum += n;
		summax = (i16) fmax((double) summax, (double) sum);

		if (sum < 0) {

			sum = 0;

		}

	}

	return summax;
}

i16 maxSubArrBrute(i16 const *const p_array, size_t const p_size) {
	i16 summax = p_array[0];

	for (i16 i = 0; i < p_size; i++) {

		i16 sum = 0;

		for (i16 j = 0; j < p_size; j++) {

			sum = (i16) fmax(sum += p_array[j], 0.0);

		}

		summax = (i16) fmax((double) summax, (double) sum);

	}

	return summax;
}

int main(int const p_argCount, char const *const p_argValues[]) {
	i16 const arr[] = { -2, +1, -3, +4, -1, +2, +1, -5, +4, };
	printf("Max-sum: `%d`.\n", maxSubArr(arr, sizearr(arr)));
	printf("Max-sum, brute-forced: `%d`.\n", maxSubArrBrute(arr, sizearr(arr)));
	exit(EXIT_SUCCESS);
}
