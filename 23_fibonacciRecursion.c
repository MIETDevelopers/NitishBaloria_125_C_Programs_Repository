// Author: Nitish Baloria
// Creation Date: 21/3/21
// Purpose Of The Program:Fibonacci sequence using recursion
#include<stdio.h>  // preprocessor directive to include header file having standard input and output functions
int main(){   // main function body   
	int n1=0,n2=1,n3,i,number; // declarations and intialisation of variables of data type int   
	printf("Enter the number of elements: "); // ask user to enter number of elements  
	scanf("%d",&number);  // read number of elemrnts from user  
	printf(" %d %d",n1,n2);//Printing 0 and 1.   
	for(i=2;i<number;++i)//Loop starts from 2 because 0 and 1 are already printed.   
		{	//This will give output.
			n3=n1+n2;    
  			printf(" %d",n3);    
  			n1=n2;    
  			n2=n3;    
 		}  
	return 0;  
}