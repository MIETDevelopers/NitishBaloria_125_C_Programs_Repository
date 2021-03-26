#include<stdio.h>  // header file
#include <conio.h>   // header file
int main(){  // main function body
    int a[1000],i,n,sum=0;  // declaration of array and variables
   
    printf("Enter size of the array : ");  // enter size of array
    scanf("%d",&n);   // read array size
 
    printf("Enter elements in array : ");  // enter array elements
    for(i=0; i<n; i++)    // using for loop
    {
        scanf("%d",&a[i]);
    }
 
    
    for(i=0; i<n; i++)   // using for loop for sum
    {
         
        sum+=a[i];
    }
     printf("sum of array is : %d",sum);  // print sum
 
    return 0;
}  // end of main function body