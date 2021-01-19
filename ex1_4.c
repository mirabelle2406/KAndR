#include <stdio.h>

/*
    This program generates a celsius fahrenheit conversion table
*/
int main(int argc, char *argv[])
{
    // create variables
    float celsius, fahr;
    int lower, upper, step;
    
    // generate header
    char heading1[] = "C";
    char heading2[] = "F";
    printf("Conversion Table\n");
    printf("%3s %8s\n", heading1, heading2);

    // initiate variables
    lower = 0;
    upper = 100;
    step = 10;

    // while loop
    celsius = lower;
    while (celsius <= upper){
        fahr = celsius * 9 / 5 + 32;
        printf("%3.0f %8.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}