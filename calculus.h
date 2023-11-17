#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double f(double x)
{
    return pow(x, 2)+x;
}

double differentiation(double x)
{
    double h = 0.0000000005f;
    double a = (f(x + h) - f(x));
    return a/h;
}

double integration(double x, double y)
{
    double h = 0.001f;
    double sum = 0;
    for (double i = 0; i < y-x; i+=h)
    {
        sum += f(x+i)*h;
    }
    return sum;
}

double log(double x) {
    double result = 0.0;
    double term = (x - 1) / (x + 1);
    double term_squared = term * term;
    double numerator = term;
    int n;

    for (n = 1; n <= 100; n += 2) {
        result += numerator / n;
        numerator *= term_squared;
    }
    return 2 * result;
}

double exp(double x)
{
    const double e = 2.71828182846;
    return pow(e, x);
}

double log10(double x)
{
    return log(x)/log(10);
}