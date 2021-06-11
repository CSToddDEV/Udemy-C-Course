/*
Author: Calvin Todd
Project: Create a pay calculator that displays gross, taxes, and net based on hours work.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initialize Variables
    double hours, gross, net, tax;
    double pay = 12.00;

    //Get Hours
    printf("Please input the hours worked: ");
    scanf("%lf", &hours);

    //Calculate Gross
    if (hours > 40)
    {
        gross = 40 * pay;
        hours -= 40;
        hours *= 1.5;
        gross += (hours * pay);
    }
    else
    {
        gross = (hours * pay);
    }

    //Store Net For Later Use
    net = gross;

    //Calculate Taxes
    if (gross <= 300)
    {
        tax = gross * .15;
    }
    else
    {
        tax = 300 * .15;
        gross -= 300;

        if (gross <= 150)
        {
            tax += (gross * .20);
        }
        else
        {
            tax += (150 * .20);
            gross -= 150;
            tax += (gross * .25);
        }
    }

    //Calculate Net and Restore Gross
    gross = net;
    net -= tax;

    //Display Answers
    printf("\n*****************************\nYour Gross Pay was %f, your taxes paid were %f, and your net pay is %f", gross, tax, net);

    return 0;
}
