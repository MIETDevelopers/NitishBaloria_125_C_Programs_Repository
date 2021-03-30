#include<stdio.h>  // header file
int main(){  // main function body
  int arr[5] = { 1, 2, 3, 4, 5 };  // declaration and initialisation of an array
  int *ptr = arr;  // declaration and initialisation of pointer
  
  printf("%d\n", ptr);  // printing values
  return 0;
}  // end of main function body