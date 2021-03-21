// Author: Nitish Baloria
// Creation Date: 21/3/21
// Purpose Of The Program:Program to perform  matrix multiplication.  
#include<stdio.h> // pre processor directive to include header file having standard input and output functions.    
int main(){  // main function body 
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k; // array declaration and variables of data type int.    
printf("enter the number of row="); // ask user to enter number of rows    
scanf("%d",&r);    // read number of rows
printf("enter the number of column="); // ask user to enter number of colmns     
scanf("%d",&c); // read number of columns.    
printf("enter the first matrix element=\n");   // enter first matrix elements  
for(i=0;i<r;i++){    // using for loop for rows
	for(j=0;j<c;j++){   // using for loop for columns 
		scanf("%d",&a[i][j]);  // read first matrix elements  
	}    
}    
printf("enter the second matrix element=\n"); // enter second matrix elements   
for(i=0;i<r;i++){  // usinf for loop for rows   
	for(j=0;j<c;j++){    // using for loop for columns
		scanf("%d",&b[i][j]); // read second matrix elements.   
	}    
}    
    
printf("multiply of the matrix=\n");   //multiplication of matrix
for(i=0;i<r;i++){    
	for(j=0;j<c;j++){    
		mul[i][j]=0;    
		for(k=0;k<c;k++){    
			mul[i][j]+=a[i][k]*b[k][j];    
		}    
	}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  // end of main function body