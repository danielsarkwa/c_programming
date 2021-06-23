#include <stdio.h>
#include <stdlib.h>

int main()
{
  int isStudent = 0;
  int isSmart = 0;

  /* IF STATEMENTS */
  if (isStudent != 0 && isSmart != 0)
  {
    printf("You are a student");
  }
  else if (isStudent != 0 && isSmart == 0)
  {
    printf("You are a not a smart student\n");
  }
  else
  {
    printf("You are not a student and not smart\n");
  }

  /* >, <, >=, <=, !=, == */
  if (1 < 3)
  {
    printf("number comparison was true\n");
  }

  if ('a' > 'b')
  {
    printf("character comparison was true\n");
  }

  /* SWITCH STATEMENTS */
  char myGrade = 'A';
  switch (myGrade)
  {
  case 'A':
    printf("You pass\n");
    break;
  case 'F':
    printf("You fail\n");
    break;
  default:
    printf("Invalid grade\n");
  }

  return 0;

  /* WHILE/DO LOOPS */
  int index = 1;
  while (index <= 5)
  {
    printf("%d \n", index);
    index++;
  }

  do
  {
    printf("%d \n", index);
    index++;
  } while (index <= 5);

  /* FOR LOOPS */
  for (int i = 0; i < 5; i++)
  {
    printf("%d \n", i);
  }
}
