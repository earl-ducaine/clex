#include "student.h"

#include <stdio.h>
#include <string.h>

char* argv;
char** pargv;

char src[40];
char dest[100];


void shutdown() {
  cl_shutdown();
}

void startup() {
  argv = "app";
  pargv = &argv;
  cl_boot(1, pargv);
}




struct student* create_student(struct student* new_student, char* name) {
  // start up




  // memset(new_student->name, '\0', sizeof(dest));
  // strcpy(src, "This is tutorialspoint.com");
  // strcpy(dest, src);

  /// new_student->name = malloc(1024 * sizeof(char));
  return new_student;

}

void display_student(struct student* new_student) {
  // no op
}
