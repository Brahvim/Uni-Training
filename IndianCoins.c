#include <stdio.h>
#include <stdlib.h>

int g_types[] = { 1, 2, 5, 10, 20, 50 };
int g_typesLen = sizeof(g_types) / sizeof(g_types[0]);

int main() {
	int rem = 0;
	int uin = 65;
	int lastskip = g_typesLen;

	for (size_t i = g_typesLen; i > 0; i--) {

		int remlocal = uin - g_types[i];

		if (g_types[i] > remlocal) {

			rem = remlocal;
			lastskip = i;
			continue;

		}

		printf("%d ", remlocal);

		if (i == 0 && uin != 0) {

			i = lastskip;

		}

	}


}
