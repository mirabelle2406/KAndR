#include <stdio.h>
// define symbolic constants
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char *argv[])
{
    // create a heading
    printf("Conversion Table\n");
    char heading1[] = "F";
    char heading2[] = "C";
    printf("%3s %6s\n", heading1, heading2);

    // create a variable fahr
    float fahr;

    // create a for loop
    // warning: if the increment was wrong, there might be a run time error
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
        printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}