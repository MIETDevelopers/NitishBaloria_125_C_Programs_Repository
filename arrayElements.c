#include <stdio.h> // Header File

int main() {  // main function body
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; // declaration and initialisation of array.
   int loop;  // declaration of variable of data type int.

   for(loop = 0; loop < 10; loop++)  // using for loop for printing values of array.
      printf("%d ", array[loop]);
      
   return 0;
}  // end of main function body