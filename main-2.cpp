#include <iostream>
#include <math.h>

int main() {
     
    double x, t, k, m, n;
    scanf("lf", &x);
    t = cos(x);
    if(t <= 0.5) {
        puts("Реализован вариант t <= 0.5");
        k = x + t;
        m = 3 * x;
        n = 2 * t;
    } else {
        puts("Реализован вариант t > 0.5");
        k = x * t;
        m = 2 * x;
        n = 3 * t;
    }

    return 0;
}