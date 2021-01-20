#include <stdio.h>
/* verify the expression*/
int main(int argc, char *argv[])
{   
    /* use control + D to general an EOF value in macos*/
    int c, v;
    c = getchar();
    while ((c != EOF)){
        c = getchar();
        v = (c != EOF);
        printf("The value of the expression is %d", v);
    }
}