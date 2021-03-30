   // Author: Nitish Baloria
// Creation Date: 28/3/21
// Purpose Of The Program: Sorting Of Array
    #include <stdio.h>  // header file
    void main(){  // main function body
        int i, j, a, n, number[30];  // declaration of variables and array of data type int
        printf("Enter the value of N \n");
        scanf("%d", &n);   // read number from user
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)  // using for loop
            scanf("%d", &number[i]);
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }