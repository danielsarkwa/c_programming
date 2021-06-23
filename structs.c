#include <stdio.h>
#include <stdlib.h>

struct Student
{
  int age;
  double gpa;
  char grade;
}

int
main()
{
  /* STRUCTS - more like an object/interfaace in other languages */
  struct Student student1;
  student1.age = 19;
  student1.gpa = 3.4;
  student1.grade = 'B';

  return 0;
}
