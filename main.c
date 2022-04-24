#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <fenv.h>

int main(void)
{
    printf("round(+2.3) = %+.1f\n", round(2.3));
    printf("round(+2.5) = %+.1f\n", round(2.5));
    printf("round(+2.7) = %+.1f\n", round(2.7));
    printf("round(-2.3) = %+.1f\n", round(-2.3));
    printf("round(-2.5) = %+.1f\n", round(-2.5));
    printf("round(-2.7) = %+.1f\n", round(-2.7));

    exit(EXIT_SUCCESS);
}