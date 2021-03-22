//Author: Nitish Baloria
// Creation Date: 21/3/21
// Purpose Of The Program:Swapping of two numbers using  call by reference. 
#include<stdio.h>  // preprocessor directive to include header file having standard input and output functions.
void swap(int *x, int *y) { // function definition
// variable declaration of data type int.
   int temp;  

   temp = *x; /* save the value of x */
   *x = *y;    /* put y into x */
   *y = temp; /* put temp into y */
  
   return;
}
int main(){  // main function body
   int a = 100; // variable declaration and initialisation.
   int b = 200; // variable declaration and initialisation.
   printf("Before swap, value of a : %d\n", a ); // print the value of a before swapping.
   printf("Before swap, value of b : %d\n", b ); // print the value of b before swapping.
 
  // calling a function to swap the values .
   swap(&a, &b); 
   printf("After swap, value of a : %d\n", a ); // print the value of a after swapping.
   printf("After swap, value of b : %d\n", b ); // print the value of b after swapping 
   return 0;
} // end of main function body.
