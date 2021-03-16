// Author: Nitish Baloria
// Creation Date: 28/1/21
// Purpose Of The Program Arithmetic operations using addition, subtraction, multiplication and remainder operator
#include<stdio.h> //Preprocessor directive to include header file having standard input and output functions.
int main(){  //main function body.
	int num1,num2,sum,sub,mult,div; // declaration of variables of int data type.
	printf("Enter two numbers:");// user is asked to enter two numbers.
	scanf("%d %d",&num1,&num2); // these two numbers are stored in these variables.	
	// doing calculations
	sum=num1+num2;
	sub=num1-num2;
	mult=num1*num2;
	div=num1/num2;
	printf("sum=%d",sum); // display the sum of numbers
	printf("sub=%d",sub); // disply the sub of numbers
	printf("mult=%d",mult); // display the mult of numbers
	printf("div=%d",div);  // display the div of numbers
	return 0;
} // end of main function body