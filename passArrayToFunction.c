#include <stdio.h>  // header file
void disp( int *num)  // function definition
{
    printf("%d ", *num);
}

int main()  // main function body
{
     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; // declaration and initialisation of array
     for (int i=0; i<10; i++)  // using for loop
     {
         /* Passing addresses of array elements*/
         disp (&arr[i]);
     }

     return 0;
}