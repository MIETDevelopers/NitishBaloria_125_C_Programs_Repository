// Author: Nitish Baloria
// Creation Date: 20/3/21
// Purpose Of The Program:Sorting an array using insertion sort
#include <stdio.h> // preprocessor directive to include header file having standard input and output functions.
int main(){  // main function body.
    int n, i, j, temp;  // declaration of variables of type int.
    int arr[64];   // declaration of array size 64.
    printf("Enter number of elements\n"); // ask user  to enter number
    scanf("%d", &n); // read input from user.
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++){  // using for loop
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i <= n - 1; i++){  // doubt onwards
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {    
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}