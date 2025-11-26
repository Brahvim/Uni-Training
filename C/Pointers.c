#include <stdlib.h>
#include <string.h>
#include <stdio.h>

float getf() {
	return 0.1f;
}

int main() {
	int num1 = 5;
	int num2 = 7;
	int *ptr = &num1;
	int **dptr = &ptr;

	printf("`**dptr` is `%d`.\n", **dptr);
	printf("`*ptr` is `%d`.\n", *ptr);
	printf("`num1` is `%d`.\n", num1); // TIL: `%p` prints `int`s in hex!

	printf("`dptr` is `%p`.\n", dptr);
	printf("`ptr` is `%p`.\n", ptr);

	// `gcc` does not complain LOL:
	int *const const const const const const const cptr = &num1;
	*cptr = 8;

	float f1 = 0.25f;
	void *vpf1 = &f1;
	printf(
		"`*vpf1` is `%f`.\n",
		*((float*) vpf1)
	);

	float(*fnptr)() = &getf;
	printf("`fnptr()` is `%f`.\n", fnptr());

	struct Student {

		char name[50];
		float marks;
		char grade;
		int roll;

	} *s1 = malloc(sizeof(struct Student));

	sizeof(struct Student);
	sizeof(char[50]);
	sizeof(float);
	sizeof(char);
	sizeof(int);
	sizeof(s1);

	strcpy(s1->name, "Brahvim");
	s1->marks = 48.5;
	s1->grade = 'A';
	s1->roll = 7;

	printf(
		"Name: %s,\nMarks: %f,\nGrade: %c,\nRoll: %d.\n",
		s1->name, s1->marks, s1->grade, s1->roll
	);

	free(s1);
}
