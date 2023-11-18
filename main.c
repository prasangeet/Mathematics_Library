#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"algebra.h"
#include"calculus.h"
#include"complex.h"
#include"reinitialize.h"

int main();

void comp()
{
    printf("\nChoose the operation to perform: Addition(1), Subtraction(2), Multiplication(3), Division(4), Modulus(5), Argument(6)\n");
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("Enter the number of terms in the addition: ");
        int n;
        scanf("%d", &n);
        compadd(n);
        reini();
    }
    else if (n==2)
    {
        printf("Subtraction can be done in only two terms\n");
        compsub(2);
        reini();
    }
    else if (n==3)
    {
        printf("\nCan only multiply 2 complex numbers at a time\n");
        compmult(2);
        reini();
    }
    else if (n==4)
    {
        printf("\nCan only Divide 2 complex numbers at a time\n");
        compdiv(2);
        reini();
    }
    
    else if(n == 5)
    {
        printf("Enter the complex number (a,b)\n");
        double a, b;
        scanf("%lf %lf", &a, &b);
        double m = modulus(a, b);
        printf("%lf", m);
        reini();
    }
    else if (n == 6)
    {
        printf("Enter the complex number (a,b)\n");
        double a, b;
        scanf("%lf %lf", &a, &b);
        double arg = argument(a, b);
        printf("%lf", arg);
        reini();
    }
}

void calc()
{
    printf("\nEnter the fuction to perform: Differentiation(1), Integration(2), Logarithm(3), Exponential(4), Log_x(6)\n");
    int n;
    scanf("%d", &n);
    if(n==1)
    {
        printf("Enter the value to put in the function: ");
        double x;
        scanf("%lf", &x);
        double a = differentiation(x);
        printf("%lf", a);
        reini();
    }
    else if (n==2)
    {
        printf("Enter the limits: ");
        double x, y;
        scanf("%lf %lf", &x, &y);
        double a = integration(x, y);
        printf("%lf (average integral)", a);
        reini();
    }
    else if (n==3)
    {
        printf("Log(");
        double x;
        scanf("%lf", &x);
        printf("%lf", log(x));
        reini();
    }
    else if (n==4)
    {
        printf("exp(");
        double x;
        scanf("%lf", &x);
        printf("%lf", exp(x));
        reini();
    }
    else if(n == 6)
    {
        printf("log_(x) (y) : ");
        double x, y;
        scanf("%lf %lf", &x, &y);
        printf("%lf", log_x(x, y));
        reini();
    }
}

void alge()
{   
    printf("\nEnter the function you need to do: Permutation(1), Combination(2), Equations((31)Linear, (32)Quadratic), Basic calutions(4), Complex(5)\n");
    int n;
    scanf("%d", &n);
    if(n == 1)
        {
            printf("Enter N and R respectively: ");
            int n, r;
            scanf("%d %d", &n, &r);
            if (permutation(n, r) == 0)
            {
                main();
            }
            else if (permutation(n, r) < 0)
            {
                printf("Input number out of the range.\n\n\n");
                main();
            }
            else
            printf("%lld", permutation(n, r));
            reini();
        }
    
    else if(n == 2)
        {
            printf("Enter N and R respectively: ");
            int n, r;
            scanf("%d %d", &n, &r);
            if (combination(n, r) == 0)
            {
                main();
            }
            else if (combination(n, r) < 0)
            {
                printf("Input number out of the range.\n\n\n");
                main();
            }
            else
            printf("%lld", combination(n, r));
            reini();
        }
    else if (n == 5)
    {
        printf("Complex mode has been turned on");
        comp();
    }
}

int main()
{
    printf("Initializing the Calulator...\nCalculator is ready to use.\nPlease enter the type of function you need to do: \nAlgebra(1), Calculus(2), Trigonometry(3), Statistics(4), Exit(5)\n");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        alge();
        break;
    
    case 2:
        calc();
        break;
    case 3:
        exit(0);
        break;
    case 5:
        exit(0);
    default:
        printf("Invalid Input: Reinitializing the calculator...\n");
        main();
        break;
    }
}