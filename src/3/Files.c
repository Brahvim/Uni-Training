#include <stdio.h>

int main() {
	FILE *file = fopen("it.txt", "w+"); // `"w+"` implies overwriting of ALL CONTENT.
	// No previous content is saved!

	for (char i = 1; i <= 5; ++i) {

		fprintf(file, "%d\n", i);

	}

	fclose(file);
}
