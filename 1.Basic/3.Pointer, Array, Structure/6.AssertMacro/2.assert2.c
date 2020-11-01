#define NDEBUG

#include <assert.h>
#include <math.h>
#include <stdio.h>

float SquareRoot (float t) {
    assert (t >= 0);
    float a = sqrt(t);
    return a;
}

int main (){

    printf("%f\n", SquareRoot(9));

    printf("%f\n", SquareRoot(-5.5));

    return 0;
}