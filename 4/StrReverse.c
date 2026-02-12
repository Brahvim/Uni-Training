#include "Util.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* strrev(char *const p_string, size_t const p_length) {
	for (size_t i = 0; i < p_length / 2; i++) {

		char const c2 = p_string[p_length - i - 1];
		char const c1 = p_string[i];

		p_string[p_length - i - 1] = c1;
		p_string[i] = c2;

	}

	return p_string;
}

int main(int const p_argCount, char const *const p_argValues[]) {
	// exit(EXIT_SUCCESS);
	char *str = "reverted";
	size_t const len = strlen(str);

	char *buf = calloc(len, sizeof(str[0]));
	memcpy(buf, str, len);

	buf = strrev(buf, len);
	printf("Reverted string: \"%s\".\n", buf);
	free(buf);
}
