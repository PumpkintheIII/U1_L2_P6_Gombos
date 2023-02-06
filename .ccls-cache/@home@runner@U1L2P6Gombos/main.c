/*
  UB C Programming Unit 1 Lesson 2 Program 6
  Perimeter and Area of a Rectangle
  Max Gombos
*/
#include <stdio.h> //imports input and output functions

int main(void) { //defines main function
  int lenInch, lenFoot, widInch, widFoot, lenTotal, widTotal;
  //initialize variables as integer
  float areaInch, areaFoot;
  //initialize variables as integer
  int perimeterLen, perimeterWidth, perimeterInch, perimeterFoot;
  //initialize variables as integer

  printf("This program allows you to find the area and perimeter of a rectangle from an entered length and width. You will get four different prompts to input the lenght and width of the rectangle in whole numbers: \n\t- Length in feet: Input your length in feet\n\t- Lenght in inches: Input the remainder of your length in inches\n\t- Width in feet: Input your width in feet\n\t- Width in inches: Input the remainder of your width in inches\n"); //instructions
  
  printf("Length in feet: "); //asks user for length
  scanf("%d", &lenFoot); //accepts user input and formats as integer
  printf("Length in inches: "); //asks user for length
  scanf("%d", &lenInch); //accepts user input and formats as integer
  printf("Width in feet: "); //asks user for width
  scanf("%d", &widFoot); //accepts user input and formats as integer
  printf("Width in inches: "); //asks user for width
  scanf("%d", &widInch); //accepts user input and formats as integer

  lenTotal = lenFoot*12; //converts length from feet to inches
  lenTotal += lenInch; //adds length inches
  widTotal = widFoot*12; //converts width from feet to inches
  widTotal += widInch; //adds width inches

  //Perimeter:
  perimeterLen = lenTotal*2; //multiplies the length by 2
  perimeterWidth = widTotal*2; //multiplies the width by 2
  perimeterInch = perimeterLen + perimeterWidth;
  //finds the perimeter by adding the doubled lenght and width
  perimeterFoot = perimeterInch/12;
  perimeterInch = perimeterInch - (perimeterFoot*12);
  //converts inches to feet and inches
  printf("\nPerimeter: %d\'%d\"", perimeterFoot, perimeterInch);
  //prints perimeter

  //Area:
  areaFoot = (lenTotal/12) * (widTotal/12);
  //converts length and width to feet and multiplies them by each other to find the area
  printf("\nArea: %f\'", areaFoot); //prints the area
  
  return 0;
}