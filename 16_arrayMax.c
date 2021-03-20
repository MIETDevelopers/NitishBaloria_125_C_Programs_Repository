// Author: Nitish Baloria
// Creation Date: 20/3/21
// Purpose Of The Program:To find max element and index in array.
#include<stdio.h> //  preprocessor to include standard input and output header files funtions
int main(){  // main function body.
int i; // Variable declaration of data type int.
float arr[5]; // Declaring Array of size 5 with float data type 

printf("Please enter five numbers:\n "); // ask user to enter five enters. 

for(i = 0; i < 5; ++i){  // using for loop for printing five values.

    scanf("%f", &arr[i]);  // read the value from user.
}

for(i = 1; i < 5; ++i){  // using for loop
    if(arr[0] < arr[i])  // if condition.
       arr[0] = arr[i];
}
printf("Largest element = %.2f",arr[0]); //Output stament  

return 0;
} // End of Body.