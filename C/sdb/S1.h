#pragma once
#include <stddef.h>

struct Student1 {

    size_t version;

    size_t namelen;
    char *name;

    size_t roll;

};

struct Student1 stRead1(void *data);
void stWrite1(struct Student1 *student, void *buf);
