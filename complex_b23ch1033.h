#include<stdio.h>
#include<math.h>

struct complex
{
    double a;
    double b;
};

double divi(double a1, double b1, double a2, double b2)
{
    double a = (a1*a2 + b1*b2);
    double b = (-a1*b2 + b2*a1);
    double c = pow(a2, 2) + pow(b2, 2);
    double r = a/c, i = b/c;
    printf("(%lf) + (%lf)i", r, i);
    return 0;
}

double compdiv(int n)
{
    struct complex a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a%d = ", i + 1);
        scanf("%lf", &a[i].a);
        printf("b%d = ", i + 1);
        scanf("%lf", &a[i].b);
    }
    divi(a[0].a, a[0].b, a[1].a, a[1].b);
    return 0;
}

double mult(double a1, double b1, double a2, double b2)
{
    double a = (a1*a2 - b1*b2);
    double b = (a1*b2 + b1*a2);
    printf("(%.2lf) + (%.2lfi)", a, b);
    return 0;
}

double compadd(int n)
{
    double s1 = 0, s2 = 0;
    struct complex a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a%d = ", i + 1);
        scanf("%lf", &a[i].a);
        printf("b%d = ", i + 1);
        scanf("%lf", &a[i].b);
    }
    for (int i = 0; i < n; i++)
    {
        s1 += a[i].a;
        s2 += a[i].b;
    }     
    printf("(%lf) + (%lf)i", s1,s2);
    return 0;
}

double compsub(int n)
{
    double s1 = 0, s2 = 0;
    struct complex a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a%d = ", i + 1);
        scanf("%lf", &a[i].a);
        printf("b%d = ", i + 1);
        scanf("%lf", &a[i].b);
    }
    s1 = a[0].a - a[1].a;
    s2 = a[0].b - a[1].b;
     
    printf("(%lf) + (%lfi)", s1,s2);
    return 0;
}

double compmult(int n)
{
    struct complex a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a%d = ", i + 1);
        scanf("%lf", &a[i].a);
        printf("b%d = ", i + 1);
        scanf("%lf", &a[i].b);
    }
    mult(a[0].a, a[0].b, a[1].a, a[1].b);
    return 0;
}

double modulus(double a, double b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

double argument(double a, double b)
{
    return atan2f(b, a);
}
