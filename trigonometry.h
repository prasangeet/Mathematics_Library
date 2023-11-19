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

double cosin(double x) {
    double cosine = 0.0;
    int sign = 1;

    for (int i = 0; i < 100; i++) {
        double term = powerfunction(x, 2 * i) / factorialfunction(2 * i);
        cosine = cosine +sign * term;
        sign = -sign;
    }

    return cosine;
}
double tangen(double x){
    double sin = sine(x);
    double cos = cosin(x);
    double tan= sin/cos;
    return tan;
}
double cosin(double x){
    double nis = sine(x);
    double cosine = 1/nis;
    return cosine;
}
double secan(double x){
    double ces = cosin(x);
    double secant = 1/ces;
    return secant;
}
double cotangen(double x){
    double toc = tangen(x);
    double cotangent = 1/toc;
    return cotangent;
}