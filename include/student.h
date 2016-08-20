#include <ecl/ecl.h>
#include <stdio.h>

struct _student {
            int id;
            char name[20];
            float percentage;
} student;

struct student* create_student(struct student* new_student, char* name);
void display_student(struct student* new_student);
void shutdown();
void startup();
