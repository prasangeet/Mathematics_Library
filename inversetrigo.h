#include<stdio.h>
#include<math.h>
#define PI 3.141592654

double arcsine(double x);
double exparcosine(double x)
{
    return (1/(sqrt(1- x * x)));
}
double expartan(double x)
{
    return (1/((1+x * x)));
}

double exparsine(double x)
{
    return 1/(sqrt(1- x * x));
}
double arccosine(double x)
{
    if(x > 1 || x < -1)
    {
        return 100;
    }
    if (x == 1)
    {
        return 0;
    }
    else if (x == -1)
    {
        return PI;
    }
    return PI/2 - arcsine(x);
}
double arctan(double x)
{
    double h = 0.00001f;
    double sum = 0;
    for (double i = 0; i <= x; i+=h)
    {
        sum += expartan(x+i*h);
    }
    return h*sum;
}
double arcsine(double x)
{
    if(x > 1 || x < -1)
    {
        return 100;
    }
    if (x == 1)
    {
        return PI/2;
    }
    else if (x == -1)
    {
        return -PI/2;
    }
    
    double h = 0.00001f;
    double sum = 0;
    for (double i = 0; i <= x; i+=h)
    {
        sum += exparsine(x+i*h);
    }
    return h*sum;
}