#include <memory.h>
#include <stdio.h>
#include <stdlib.h>

#define STUDENT_COUNT 2
#define STUDENT_NAME_LEN 20
#define STUDENT_BRANCH_LEN 20

struct Student {

  int roll;
  int marks;
  char name[STUDENT_NAME_LEN];
  char branch[STUDENT_BRANCH_LEN];
};

void studentRead(struct Student *const p_student) {
  printf("Name: ", NULL);
  scanf("%20s", p_student->name);
  putc('\n', stdin);

  printf("Roll: ", NULL);
  scanf("%d", &p_student->roll);
  putc('\n', stdin);

  printf("Branch: ", NULL);
  scanf("%20s", p_student->branch);
  putc('\n', stdin);

  printf("Marks: ", NULL);
  scanf("%d", &p_student->marks);
  putc('\n', stdin);
}

int main(int p_argc, char **p_argv) {
  struct Student students[STUDENT_COUNT] = {
      {
          .roll = 5,
          .marks = 90,
          .branch = "CSE",
          .name = "Brahvim Bhaktvatsal",

      },
      {

          .roll = 5,
          .marks = 90,
          .branch = "CSAI",
          .name = "Atharv Dwivedi",

      },
  };

  //	for (int i = 0; i < STUDENT_COUNT; ++i) {
  //
  // 		printf("Please enter information about student #%d!:\n", i);
  // 		studentRead(&students[i]);
  //
  // 	}

  printf("%-20s %-5s %-20s %-5s\n", "Name", "Roll", "Branch", "Marks");

  for (int i = 0; i < STUDENT_COUNT; ++i) {

    struct Student *s = &students[i];
    printf("%-20s %-5d %-20s %-5d\n", s->name, s->roll, s->branch, s->marks);
  }

  exit(EXIT_FAILURE);
}
