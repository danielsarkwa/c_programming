#include <stdio>
#include <stdlib>

int main()
{
  /* ARRAYS */
  int simpleArray[6]; /* initialising an array with defined size*/
  int luckyNumbers[] = {4, 8, 12, 65, 33, 65};

  luckyNumbers[0] = 90;
  printf("%d \n", luckyNumbers[0]);
  printf("%d \n", luckyNumbers[1]);

  /* N DIMENTAIONAL ARRAYS */
  int simpleArray1[2][3];
  int numberGrid[2][3] = {{1, 2, 3}, {4, 5, 6}};
  numberGrid[0][1] = 99;

  printf("%d \n", numberGrid[0][0]);
  printf("%d \n", numberGrid[0][1]);

  return 0;
}