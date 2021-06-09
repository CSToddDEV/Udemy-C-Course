/* Create a enum data type and initialize 3 variables of its type
and print their position in the enum array or "value" */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare variables
    enum companies {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum companies goog, xo, eb;


    //Load variables
    goog = GOOGLE;
    xo = XEROX;
    eb = EBAY;

    //Print Variables
    printf("\n*********************************************\n");
    printf("Google's position in the enum array is: %d\n", goog);
    printf("Xerox's position in the enum array is: %d\n", xo);
    printf("Ebay's position in the enum array is: %d\n", eb);

    return 0;
}
