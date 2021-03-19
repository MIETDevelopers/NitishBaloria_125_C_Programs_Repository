// Author: Nitish Baloria
// Creation Date: 19/3/21
// Purpose Of The Program:To check number is Armstrong or not.                                          
#include <stdio.h> // preprocessor directive to include header file having standard input and output functions
int main() { // main function body
  int n,num, remainder,result = 0; // declaration of variables of data type int.
  printf("Enter a positive integer:"); // ask user to enter a positive int.
  scanf("%d", &num);// read input from user.
  n=num;   // assign the value of num to n.
  while (n>0) {  // using while loop.
    remainder = n%10;       // doubts onwards
    result=result+remainder*remainder*remainder;
    n=n/10;
  }
  if(result==num)
      printf("%d is an Armstrong number.", num);
  else
      printf("%d is not an Armstrong number.", num);
  return 0;
}