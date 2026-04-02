#include <stdio.h>

int main() {
	int n = 4;

	for (size_t i = 1; i < 5; i++) {

		for (size_t j = 0; j <= n - i; j++) {

			printf("%c",
				j > n - i
				? ' '
				: '*'
			);

		}

		putchar('\n');

	}
}
