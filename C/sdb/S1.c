#include "S1.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

struct Student1* stCreate1() {
	struct Student1 *student = malloc(sizeof(struct Student1));
	student->name = calloc(1, sizeof(student1_name_t)); // `"\0"`.
	student->version = 1;
	student->namelen = 1;
	student->roll = 0;
	return student;
}

void stLog1(struct Student1 *p_student) {
	printf(
		"[Student,version=%d,namelen=%d,name=%s,roll=%d]\n",
		p_student->version,
		p_student->namelen,
		p_student->name,
		p_student->roll
	);
}

struct Student1* st1Read1(FILE *p_file) {
	struct Student1 *student = stCreate1();
	fread(&student->version, sizeof(student1_version_t), 1, p_file);

	if (student->version != 1) {

		return student;

	}

	fread(&student->namelen, sizeof(student1_namelen_t), 1, p_file);

	student->name = calloc(student->namelen, sizeof(student1_name_t));
	fread(student->name, sizeof(student1_name_t), student->namelen, p_file);

	fread(&student->roll, sizeof(student1_roll_t), 1, p_file);

	return student;
}

void stWrite1(struct Student1 *p_student, FILE *p_file) {
	fwrite(&p_student->version, sizeof(student1_version_t), 1, p_file);
	fwrite(&p_student->namelen, sizeof(student1_namelen_t), 1, p_file);
	fwrite(p_student->name, sizeof(student1_name_t), p_student->namelen, p_file);
	fwrite(&p_student->roll, sizeof(student1_roll_t), 1, p_file);
}
