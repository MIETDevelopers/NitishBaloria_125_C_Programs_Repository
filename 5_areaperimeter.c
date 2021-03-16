// Author: Nitish Baloria
// Creation Date: 9/3/21
// Purpose Of The Program:To find the area,perimeter of circle,square and rectangle.
//Area of circle:(22/7)*r*r:radius.
//Perimeter of circle:2*(22/7)*r.
//Area of square:side*side.
//Perimeter of square:4*side.
//Area of rectangle:length*breath.
//Perimeter of rectangle:2*(length+breath).
#include<stdio.h> // Preprocessor directive to include header file having standard input and output functions.
int main(){  // main function body
    // declaration of variables of float data type.
	float radiusofcircle,sideofsquare,lengthofrect,breathofrect,areaofcircle,perimeterofcircle,areaofsquare,perimeterofsquare,areaofrect,perimeterofrect;
    // assigning values to variables 
	radiusofcircle=2.0;
    sideofsquare=3.0;
    lengthofrect=1.0;
    breathofrect=5.0;
    // Doing calculations
	areaofcircle=((22*radiusofcircle*radiusofcircle)/7);
    // display the area of circle
    printf("Area of circle:%f",areaofcircle);
    // doing calculations
    perimeterofcircle=((2*22*radiusofcircle)/7);
    // display the perimeter of circle
    printf("/nPerimeter of circle:%f",perimeterofcircle);
    // doing calculations
    areaofsquare=sideofsquare*sideofsquare;
    // display the area of square
    printf("/nArea of square:%f",areaofsquare);
    // doing calculations
    perimeterofsquare=4*sideofsquare;
    // display the perimeterofsquare
    printf("/nPerimeter of square:%f",perimeterofsquare);
    // doing calculations
    areaofrect=lengthofrect*breathofrect;
    // display area of rectangle
    printf("/nArea of rect:%f",areaofrect);
    // doing calculations
    perimeterofrect=2*(lengthofrect+breathofrect);
    // displat perimeter of rectangle
    printf("/Perimeter of rect:%f",perimeterofrect);
    return 0;
} // end of main function