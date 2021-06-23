#include <stdio>
#include <stdlib>

int main()
{
  /* POINTERS - these are basically memory address */
  int num = 10;
  printf("%p \n", &num);

  int *pNum = &num;
  printf("%p \n", pNum);  /* Prints out the pointer reference */
  printf("%d \n", *pNum); /* De-reference the point - this returns the value */

  return 0;
}
