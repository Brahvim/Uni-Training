// This is LeetCode Problem #11!
// "Container With Most Water".
// *Find the two lengths that are largest AND farthest apart.*

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#define sizearr(p_array) (sizeof(p_array) / sizeof(p_array[0]))

int attempt1() {
	int const heights[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7, };
	int bestId1 = 0;

	for (size_t i = 0; i < sizearr(heights); i++) {

		if (heights[i] < heights[bestId1]) {

			bestId1 = i;

		}

	}

	int bestId2 = 0;
	for (size_t i = 0; i < sizearr(heights); i++) {

		if (i == bestId1) {

			i++;
			continue;

		}

		if (heights[i] < heights[bestId1]) {

			bestId2 = i;

		}

	}

	// Now we have the largest two!
}

int attempt2() {
	int const heights[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7, };
	int bestId1 = 0;

	for (size_t i = 0; i < sizearr(heights); i++) {

		if (heights[i] < heights[bestId1]) {

			bestId1 = i;

		}

	}

	int bestId2 = 0;
	for (size_t i = 0; i < sizearr(heights); i++) {

		if (i == bestId1) {

			i++;
			continue;

		}

		if (heights[i] < heights[bestId1]) {

			bestId2 = i;

		}

	}
}
