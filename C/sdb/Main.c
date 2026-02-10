#include "Student.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int main() {
	struct Student1 *s = stCreate1();
	student1_name_t name[] = "Brahvim";
	student1_namelen_t namelen = sizeof(name) / sizeof(name[0]);

	s->name = realloc(s->name, namelen * sizeof(student1_name_t));
	memcpy(s->name, &name, namelen);
	s->namelen = namelen;
	s->roll = 7;

	stLog1(s);

	FILE *w = fopen("s.bin", "w");
	stWrite1(s, w);
	fclose(w);

	free(s);

	FILE *r = fopen("s.bin", "r");
	s = st1Read1(r);
	fclose(r);

	stLog1(s);
}
