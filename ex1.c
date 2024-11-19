/******************
Name: Mohamad Arabi
ID: 325523389
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  int x, y, z; // x is the number the user inputs, y is the postion, z is an intermediate so my brain doesn't get confused
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  printf("Please enter a number:\n");
  scanf("%d",&x);
  printf("Please enter a position:\n");
  scanf("%d",&y);
  z = (x & ( 1 << y )) >> y;
  printf("The bit in position %d of the number %d is: %d\n",y,x,z);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d",&x);
  printf("Please enter a position:\n");
  scanf("%d",&y);
  z = x | 1 << y;
  printf("Number with bit %d set to 1: %d\n",y,z);
  z = x | 0 << y;
  printf("Number with bit %d set to 0: %d\n",y,z);
  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d",&x);
  printf("Please enter a position:\n");
  scanf("%d",&y);
  z = x ^ 1 << y;
  printf("Number with bit toggled: %d\n",z);
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d",&x);
  z = (x & ( 1 << 0 )) >> 0;
  z = z ^ 1 << 0;
  printf("%d\n",z);
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  printf("Please enter the first number (octal):\n");
  scanf("%o",&x);
  printf("Please enter the second number (octal):\n");
  scanf("%o",&y);
  z = x + y;
  printf("The sum in hexadecimal: %X\n",z);
  int b1 = (z & ( 1 << 3 )) >> 3;
  int b2 = (z & ( 1 << 5 )) >> 5;
  int b3 = (z & ( 1 << 7 )) >> 7;
  int b4 = (z & ( 1 << 11 )) >> 11;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n",b1,b2,b2,b4);
  printf("Bye!\n");
  return 0;
}
