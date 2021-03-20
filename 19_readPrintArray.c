// Author: Nitish Baloria
// Creation Date: 20/3/21
// Purpose Of The Program:To read and print elements in two dimensional array.
#include<stdio.h> // pre processor directive to include header file having standard input and output functions.
int main(){ // main function body.
   int disp[2][3]; // declaration of 2D array.
   int i, j;  // declaration of variables of data type int.
   for(i=0; i<2; i++){  // using for loop for printing rows.
      for(j=0;j<3;j++){ // using for loop for printing columns
         printf("Enter value for disp[%d][%d]:", i, j); // ask user to enter values.
         scanf("%d", &disp[i][j]); // read numbers fron user.
      }
   }
   printf("Two Dimensional array elements:\n"); // printing the array elements
   for(i=0; i<2; i++){ // using for loop for rows
      for(j=0;j<3;j++){ // using for loop for columns.
         printf("%d ", disp[i][j]); // print the elements 
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
} // end of main function body.