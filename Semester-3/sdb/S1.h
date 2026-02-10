#pragma once
#include <wchar.h>
#include <stdio.h>
#include <stdint.h>

typedef char student1_name_t;
typedef uint64_t student1_roll_t;
typedef uint16_t student1_namelen_t;
typedef uint16_t student1_version_t;

struct Student1 {

	student1_version_t version;

	student1_namelen_t namelen;
	student1_name_t *name;

	student1_roll_t roll;

};

struct Student1* stCreate1();
struct Student1* st1Read1(FILE *file);
void stLog1(struct Student1 *student);
void stWrite1(struct Student1 *student, FILE *file);
