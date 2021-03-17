// Author: Nitish Baloria
// Creation Date: 9/3/21
// Purpose Of The Program:To find the number is even or odd.
#include<stdio.h> //preprocessor directive to include header file having standard input and output functions
int main(){  // main function body.
	int num; // declaration of variable of int data type.
	printf("Enter a number:"); // enter a number
	scanf("%d",&num); // number is stored in variable num.
	// true if num is divisible by 2
	if(num%2==0)
	    printf("%d is a even number",num); // display even number.
	// false 
	else
	    printf("%d is a odd number",num); // display odd number.
	return 0;
} // end of main function body.