#include <stdio.h>

int main(int argc, char *argv[])
{
    /*
        This program print a C-F conversion table 
    */

    // Define variables
    float fahr, celsius;
    int lower, upper, step;

    char heading1[] = "C";
    char heading2[] = "F";
    
    // Print a heading.
    printf("Conversion Table\n");
    printf("%3s %6s\n", heading1, heading2);

    // Set limits and step
    lower = 0;
    upper = 300;
    step = 20;

    // While loop
    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}