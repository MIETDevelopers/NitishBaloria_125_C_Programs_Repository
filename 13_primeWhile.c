// Author: Nitish Baloria
// Creation Date: 19/3/21
//Purpose: Check if a number is prime or not using while loop
#include <stdio.h>//Preprocessor directive to include input output function header file
//start of the main body function
int main(){
   int n, count = 0;//Declaring variables of integer data type
 
    printf("Enter the Number.\n");//printf function calling to print numbers
    scanf("%d",&n);//This will scan (read) the number entered by user.
                        
    int i=2;        // doubt from line 12 onwards
    while(i<=n/2)   
    {
        ++i;
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if (count==0)
        printf("%d is a Prime number.",n);//printf function calling to print a prime number
    else
        printf("%d is not a Prime number.",n);//printf function calling to print not a prime number
 
    getchar();
    return 0; //return statement  
}//end of main body function