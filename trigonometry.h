#include <stdio.h>
double powerfunction(double x, int n) {
    double power = 1.0;
    for (int i = 0; i < n; ++i) {
        power = power* x;
    }
    return power;
}

double factorialfunction(int n) {
    double factorial = 1.0;
    for (int i = 2; i <= n; ++i) {
        factorial =factorial* i;
    }
    return factorial;
}

double sine(double x) {
    double result = 0.0;
    int sign = 1;
    int terms = 100;

    for (int i = 0; i < terms; ++i) {
    double term = powerfunction(x, 2 * i + 1) / factorialfunction(2 * i + 1);
        result += sign * term;
        sign = -sign;
    }
    return result;
}
