/* To find the sine of an angle in degree by summing the terms generated till the value
 of the term is greater than 0.0001*/
#include <stdio.h>
#include <math.h>
#define PI 3.1415

void main() {
    int n = 1;
    double angle_deg, angle_radian, sin_value = 0.0, term = 1.0;
    
    printf("Enter the angle in degrees to find its sine(x): ");
    scanf("%lf", &angle_deg);
    
    // Convert from degrees to radians.
    angle_radian = angle_deg * (PI / 180.0);
    
    // Initialize the term.
    term = angle_radian;
    
    // Taylor series expansion formula for sine(x): sin(x) = x - (x^3 / 3!) + (x^5 / 5!) - ...
    // Continue summing terms until the absolute value of the term is greater than 0.0001.
    while (fabs(term) > 0.0001) {
        n += 2;
        term = -term * angle_radian * angle_radian / (n * (n - 1));
        sin_value += term;
    }
    
    printf("The sine(%lf) is approximately %lf.\n", angle_deg, sin_value);
}

