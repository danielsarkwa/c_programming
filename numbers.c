#include <stdio>
#include <stdlib>

int main()
{
  /* NUMBERS */
  printf("%d \n", 2 * 3);       /* Basic Arithmetic: +, -, /, * */
  printf("%d \n", 2 % 3);       /* Modulus Op. : return remainder of 10/3 */
  printf("%d \n", (1 + 2) * 3); /* order of operations */
  printf("%f \n", 10 / 3.0);    /* int's and double */

  int num = 10;
  num += 100; /* +=, -=, /=, *= */
  printd("%d \n", num);

  num++;
  printf("%d \n", num);

  return 0;
}
