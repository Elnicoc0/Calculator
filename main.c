#include <stdio.h>
#include <stdlib.h>

int addition (int a, int b)
{
    return a+b;
}

int soustraction (int a, int b)
{
    return a-b;
}

int main ()
{
    printf("L'addition de a et b vaut %d\n", addition(1, 4));
    printf("la soustraction de a et b vaut %d\n", soustraction(1, 4));
    return 0;
}
