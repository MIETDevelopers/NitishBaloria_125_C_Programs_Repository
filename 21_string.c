// Author: Nitish Baloria
// Creation Date: 21/3/21
// Purpose Of The Program:To demonstrate the use of various string operations.
#include <stdio.h>  // preprocessor directive to include header file having standard input and output functions.
void displayString(char str[]);  //function declaration

int main()  // main function body
{
    char str[50];                 // doubt in this program
    printf("Enter String: \n");
    fgets(str, sizeof(str), stdin);       
    displayString(str);        
    return 0;
}
void displayString(char str[])  // function definition 
{
	//This will give output.
    printf("String Output: ");
    puts(str);
} 