#include "S1.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

struct Student1 stRead1(void *p_data) {
    size_t const version = (size_t) (*(size_t*) p_data);

    if (version != 1) {

        return ((struct Student1) {

            /**/.name = NULL,
                .version = 1,
                .namelen = 0,
                .roll = 0,

        });

    }

    struct Student1 student;
    student.version = version;
    p_data += offsetof(struct Student1, version);

    student.namelen = (size_t) (*(size_t*) p_data);
    p_data += offsetof(struct Student1, namelen);

    char *name = p_data;
    strncpy((char*) &(student.name), p_data, student.namelen);
    p_data += student.namelen * sizeof(typeof(*student.name));

    student.roll = (size_t) (*(size_t*) p_data);

    return student;
}

struct Student1 stFread1(FILE *p_file) {
    size_t version;
    fread(&version, sizeof(size_t), 1, p_file);

    if (version != 1) {

        return ((struct Student1) {

            /**/.name = NULL,
                .version = 1,
                .namelen = 0,
                .roll = 0,

        });

    }

    struct Student1 student;
    student.version = version;
    p_data += offsetof(struct Student1, version);

    student.namelen = (size_t) (*(size_t*) p_data);
    p_data += offsetof(struct Student1, namelen);

    char *name = p_data;
    strncpy((char*) &(student.name), p_data, student.namelen);
    p_data += student.namelen * sizeof(typeof(*student.name));

    student.roll = (size_t) (*(size_t*) p_data);

    return student;
}

void stWrite1(struct Student1 *p_student, void *p_buf) {
    *(size_t*) p_buf = p_student->version;
}
