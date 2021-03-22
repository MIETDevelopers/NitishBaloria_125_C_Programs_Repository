// Author: Nitish Baloria
// Creation Date: 21/3/21
// Purpose Of The Program:Swapping of two numbers using  call by value. 
#include<stdio.h>  // preprocessor directive to include header file having standard input and output functions.
void swap(int x, int y); // function declaration. 
int main (){ // main function body
   int a = 100;  // variable declaration and initialisation.
   int b = 200;  // variable declaration and initialisation.
 
   printf("Before swap, value of a : %d\n", a ); // print the value of a before swapping.
   printf("Before swap, value of b : %d\n", b ); // print the value of b before swapping.
 
   // calling a function to swap the values.
   swap(a, b);
 
   printf("After swap, value of a : %d\n", a );  // print the value of a after swapping.
   printf("After swap, value of b : %d\n", b ); // print the value of b after swapping. 
 
   return 0;
}
void swap(int a, int b) {  // function definition

   int temp;

   temp = a; /* save the value of x */
   a = b;    /* put y into x */
   b= temp; /* put temp into y */
  
   return;
}