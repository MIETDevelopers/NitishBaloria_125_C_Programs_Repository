// Author: Nitish Baloria
// Creation Date: 21/3/21
// Purpose Of The Program:Program to read the string and give it as output. 		
#include <stdio.h> // preprocessor directive to include header file having standard input and output functions
int main(){   // main function body
    char name[20];  //declaration of array
    printf("Enter name: \n");   // ask user to enter name
    scanf("%s", &name); //This will read the name.
    printf("Your name is %s.", name); //This will show (print) the name.
    return 0;
} //end of main function body