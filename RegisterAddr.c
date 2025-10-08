#include <stdio.h>

// register int x = 0; // Impossible, `x` is embedded into the program!

int main() {
	register int y = 0;
	// printf("%p\n", &y); // Impossible, variable may be in a register!
}
