// Author: Nitish Baloria
// Creation Date: 18/3/21
// Purpose Of The Program:To find factorial usinf for loop.
#include<stdio.h> //preprocessor directive to include header file having standard input and output functions 
int main(){ // main function body.
	int num,fact=1; // declaration of variables of data type int.
	printf("Enter a number:"); // ask user to enter a number.
	scanf("%d",&num);  // storing the number in the variable num.
	 for(int i=1;i<=num;i++){ // using for loop to calculate factorial of a number.
	 	fact=fact*i;  // value of i is multiplied with the value of fact.
	 }
	 printf("Factorial of %d is:%d",num,fact); // display the factorial of entered num.
	return 0;
} // end of main function body.