#include <stdio.h>

void recurse(int const p_progress, int const p_sky) {
	if (p_progress == p_sky) {

		return;

	}

	printf("%d ", p_progress);
	recurse(1 + p_progress, p_sky);
}

void recurseStart(int const p_maximum) {
	printf("%d ", 0);
	recurse(1, 1 + p_maximum);
}

int main() {
	printf("Print till which number?: ");

	int uin = 0;
	scanf("%d", &uin);

	recurseStart(uin);
	putchar('\n');
}
