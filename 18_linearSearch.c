// Author: Nitish Baloria
// Creation Date: 20/3/21
// Purpose Of The Program:Searching an element in an array using linear search.
#include <stdio.h>
void main(){ // main function body.
    int num,i,keynum,found = 0; // declaration of variables of data type int.
    printf("Enter the number of elements: \n"); // ask use to enter elements
    scanf("%d", &num);  // read number from user.
    int array[num];  // declaration of array.
    printf("Enter the elements one by one: \n");
    for (i = 0; i < num; i++){  // using for loop
        scanf("%d", &array[i]); 
    }
    printf("Enter the element to be searched: "); // doubts onwards
    scanf("%d", &keynum);
    for (i = 0; i < num ; i++){
        if (keynum == array[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1) 
        printf("Element is present in the array at position %d .",i+1);
    else
        printf("Element is not present in the array.\n");
}