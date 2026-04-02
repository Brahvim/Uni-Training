#include <stdio.h>

extern void increment();

int g_value;

int main() {
	printf("%d\n", g_value);

	increment();
	printf("%d\n", g_value);

	increment();
	printf("%d\n", g_value);
}
