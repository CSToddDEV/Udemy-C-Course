#include <stdio.h>
#include <stdlib.h>

int main()
{
    float width = 0.0;
    float height = 0.0;
    float perimeter, area;

    //Get width from keyboard input
    printf("Please input the width of the rectangle: \n");
    scanf("%f", &width);

    //get height from keyboard input
    printf("\nPlease input the height of the rectangle: \n");
    scanf("%f", &height);

    //Calculations
    perimeter = 2 * (width + height);
    area = width * height;

    //Print Statements
    printf("\n\n**************\nFor a rectangle with width %f and height %f... \nThe perimeter is %f and the area is %f.\n\nTHANK YOU!", width, height, perimeter, area);

    return 0;
}
