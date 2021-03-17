// Author: Nitish Baloria
// Creation Date: 16/3/21
// Purpose Of The Program:To find the Eucledian distance between two points.
#include<stdio.h> // preprocessor directive to include header file having standard input and output functions.
#include<math.h>  // preprocessor directive to include header file having math functions.
int main(){ // main function body.
	float x1,x2,y1,y2,distance; // declaration of variables of float data type
	printf("Enter point 1(x1,y1)\n"); // enter two numbers 
	scanf("%f %f",&x1,&y1);  // these two numbers are stored in variables x1,y1.     
	printf("Enter point 2(x2,y2)\n"); // enter two numbers 
	scanf("%f %f",&x2,&y2); // these two numbers are stored  in variable x2,y2.
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); // calculating distance.
	printf("Distance:%f",distance); // display the output distance.
	return 0;
} //end of main function body.
