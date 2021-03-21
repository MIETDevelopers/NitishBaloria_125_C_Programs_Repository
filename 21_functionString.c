// Author: Nitish Baloria
// Creation Date: 21/3/21
// Purpose Of The Program: Program for showing working of fgets() & puts()
#include <stdio.h> // preprocessor directive to include header file having standard input and output functions
int main(){  // main function body
    char name[30]; // declaration of array
    printf("Enter name: \n");
    fgets(name, sizeof(name), stdin);  // Read(scan) string
    printf("Name: ");
    puts(name);    // Display(print) string
    return 0;
}