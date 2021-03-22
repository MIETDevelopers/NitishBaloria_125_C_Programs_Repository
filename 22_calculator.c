// Author: Nitish Baloria
// Creation Date: 21/3/21
// Purpose Of The Program:Write a C program to create Simple Calculator using switch case and function for every operation
#include<stdio.h>  // preprocessor directive to include header file having standard input and output functions
int main(){   // main function body
    char operator; // variable declare of char data type
    double a, b;  // variables declaration of data type double
    printf("Enter an operator (+, -, *, /):"); //It will print the operater to be entered by user.
    scanf("%c", &operator); //It will scan the operater entered by user.
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b); //It will scan the numbers entered by user.
    switch(operator) //Switch case is used to perfom the calculation case that is scanned (in line 6) based on user input.
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Addition Function
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtraction Function
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //Multiplication Function
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Division Function
            break;
    printf("Error encountered by the input values");  //Default
    }
    return 0;
}