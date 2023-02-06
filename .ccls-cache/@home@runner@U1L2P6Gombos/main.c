/*
  UB C Programming Unit 1 Lesson 2 Program 6
  Perimeter and Area of a Rectangle
  Max Gombos
*/
#include <stdio.h> //imports input and output functions

int main(void) { //defines main function
  int lenInch, lenFoot, widInch, widFoot, lenTotal, widTotal;
  //initialize variables as integer
  int areaInch, areaFoot;
  //initialize variables as integer
  int perimeterLen, perimeterWidth, perimeterInch, perimeterFoot;
  //initialize variables as integer

  printf("Please enter the length in feet: "); //asks user for length
  scanf("%d", &lenFoot); //accepts user input and formats as integer
  printf("Please enter the length in inches: "); //asks user for length
  scanf("%d", &lenInch); //accepts user input and formats as integer
  printf("Please enter the width in feet: "); //asks user for width
  scanf("%d", &widFoot); //accepts user input and formats as integer
  printf("Please enter the width in inches: "); //asks user for width
  scanf("%d", &widInch); //accepts user input and formats as integer

  lenTotal = lenFoot*12; //converts length from feet to inches
  lenTotal += lenInch; //adds length inches
  widTotal = widFoot*12; //converts width from feet to inches
  widTotal += widInch; //adds width inches

  printf("Lenght in inchs: %d", lenTotal); //prints lenght
  printf("\nWidth in inches: %d", widTotal); //prints width

  //Perimeter:
  perimeterLen = lenTotal*2;
  perimeterWidth = widTotal*2;
  perimeterInch = perimeterLen + perimeterWidth;
  perimeterFoot = perimeterInch/12;
  perimeterInch = perimeterInch - (perimeterFoot*12);
  printf("\nPerimeter: %d\'%d\"", perimeterFoot, perimeterInch);
  
  return 0;
}