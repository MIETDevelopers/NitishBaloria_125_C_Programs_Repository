// Author: Nitish Baloria
// Creation Date: 17/3/21
// Purpose Of The Program:To find the alphabet is vowel or consonant.
#include<stdio.h> //preprocessor directive to include header file having standard input and output functions 
int main(){ // main function body
	char ch; // declaration of variable of data type char.
	printf("Enter a character:"); // enter a character.
	scanf("%c",&ch); // storing the character in variable ch.
	// using if else statement for the result.
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='U'||ch=='u')
	 printf("%c is a vowel\n",ch); // display the vowel.
	else
	 printf("%c is a consonant\n",ch); // display the consonant.
	return 0;  
} // end of main function body.