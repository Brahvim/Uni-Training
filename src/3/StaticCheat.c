#include <stdio.h>

int* yield() {
	static int counter = 0;
	printf("%d\n", counter);
	++counter;
	return &counter;
}

int main() {
	int *counter;

	counter = yield();
	counter = yield();

	++*counter;

	counter = yield();
}
