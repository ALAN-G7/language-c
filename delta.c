#include <stdio.h>
#include <math.h>

int a,b,c;


int main () {
    printf ("Enter a: ");
    scanf ("%d", &a);
    printf ("Enter b: ");
    scanf ("%d", &b);
    printf ("Enter c: ");
    scanf ("%d", &c);

    int delta = b*b - 4*a*c;

    if (delta>0)
    {
        int x = (-b + sqrt(delta)) / (2*a);
        int y = (-b - sqrt(delta)) / (2*a);
        printf("%i %i", x, y);
    }
    else if (delta==0)
    {
        int x = -b / (2*a);
        printf("%d", x);
    }
    else 
    {
        printf("No solution");
    }
    printf("\n");
return 0;
}