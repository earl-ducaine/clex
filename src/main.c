#include "student.h"



int main(int argc, char *argv[]){
  startup();
  printf("made it here!\n");
  shutdown();
  struct student* new_student;
  create_student(new_student, "Joe");
  // student_display(new_student);
  return 0;
}
