#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"algebra.h"
#include"calculus.h"
#include"complex.h"
#include"trigonometry.h"
#include"reinitialize.h"
#include"quadratic.h"
#include"linear.h"
#include"stats.h"
#include"matrix.h"
#define MAX 1000000.00f
#define MIN -1000000.00f

const double pi = 3.141592654;

int main();

void trig()
{
    printf("\nsine(1), cosine(2), tangent(3), cosecant(4), secant(5), cotangent(6)\n");
    int n;
    scanf("%d", &n);
    if (n == 1)         
    {
        printf("\nDegrees(1), Radians(2)\n");
        int angle_selector;
        scanf("%d", &angle_selector);
        if (angle_selector == 1)
        {
            printf("sin(degrees): ");
            double degrees;
            scanf("%lf", &degrees);
            double radians = degrees * (pi/180);
            printf("%lf", sine(radians));
            reini();
        }
        else if (angle_selector == 2)
        {
            printf("sin(radians): ");
            double radians;
            scanf("%lf", &radians);
            printf("%lf", sine(radians));
            reini();
        }
    }
    else if (n == 2)
    {
        printf("\nDegrees(1), Radians(2)\n");
        int angle_selector;
        scanf("%d", &angle_selector);
        if (angle_selector == 1)
        {
            printf("cos(degrees): ");
            double degrees;
            scanf("%lf", &degrees);
            double radians = degrees * (pi/180);
            printf("%lf", cosin(radians));
            reini();
        }
        else if (angle_selector == 2)
        {
            printf("cos(radians): ");
            double radians;
            scanf("%lf", &radians);
            printf("%lf", cosin(radians));
            reini();
        }
    }
    else if (n==3)
    {
        printf("\nDegrees(1), Radians(2)\n");
        int angle_selector;
        scanf("%d", &angle_selector);
        if (angle_selector == 1)
        {
            printf("tan(degrees): ");
            double degrees;
            scanf("%lf", &degrees);
            double radians = degrees * (pi/180);
            if (tangen(radians) > MAX || tangen(radians) < MIN)        
            {
                printf("Inf");
                reini();
            }
            printf("%lf", tangen(radians));
            reini();
        }
        else if (angle_selector == 2)
        {
            printf("tan(radians): ");
            double radians;
            scanf("%lf", &radians);
            printf("%lf", tangen(radians));
            if (tangen(radians) > MAX || tangen(radians) < MIN)        
            {
                printf("Inf");
                reini();
            }
            reini();
        }
    }
    else if (n == 4)
    {
        printf("\nDegrees(1), Radians(2)\n");
        int angle_selector;
        scanf("%d", &angle_selector);
        if (angle_selector == 1)
        {
            printf("cosec(degrees): ");
            double degrees;
            scanf("%lf", &degrees);
            double radians = degrees * (pi/180);
            if (cosecan(radians) > MAX || cosecan(radians) < MIN)        
            {
                printf("Inf");
                reini();
            }
            printf("%lf", cosecan(radians));
            reini();
        }
        else if (angle_selector == 2)
        {
            printf("cosec(radians): ");
            double radians;
            scanf("%lf", &radians);
            if (cosecan(radians) > MAX || cosecan(radians) < MIN)        
            {
                printf("Inf");
                reini();
            }
            printf("%lf", cosecan(radians));
            reini();
        }
    }
    else if (n == 5)
    {
        printf("\nDegrees(1), Radians(2)\n");
        int angle_selector;
        scanf("%d", &angle_selector);
        if (angle_selector == 1)
        {
            printf("sec(degrees): ");
            double degrees;
            scanf("%lf", &degrees);
            double radians = degrees * (pi/180);
            if (secan(radians) > MAX || secan(radians) < MIN)        
            {
                printf("Inf");
                reini();
            }
            printf("%lf", secan(radians));
            reini();
        }
        else if (angle_selector == 2)
        {
            printf("sec(radians): ");
            double radians;
            scanf("%lf", &radians);
            if (secan(radians) > MAX || secan(radians) < MIN)        
            {
                printf("Inf");
                reini();
            }
            printf("%lf", secan(radians));
            reini();
        }
    }
    else if (n == 6)
    {
        printf("\nDegrees(1), Radians(2)\n");
        int angle_selector;
        scanf("%d", &angle_selector);
        if (angle_selector == 1)
        {
            printf("cot(degrees): ");
            double degrees;
            scanf("%lf", &degrees);
            double radians = degrees * (pi/180);
            if (cotangen(radians) > MAX || cotangen(radians) < MIN)        
            {
                printf("Inf");
                reini();
            }
            printf("%lf", cotangen(radians));
            reini();
        }
        else if (angle_selector == 2)
        {
            printf("cot(radians): ");
            double radians;
            scanf("%lf", &radians);
            if (cotangen(radians) > MAX || cotangen(radians) < MIN)
            {
                printf("Inf");
                reini();
            }
            printf("%lf", cotangen(radians));
            reini();
        }
    }
}

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
    printf("\nEnter the fuction to perform: Differentiation(1), Integration(2), Logarithm(3), Exponential(4), Log_x(6), antilog(7)\n");
    int n;
    scanf("%d", &n);
    if(n==1)
    {
        printf("(function is to be entered in the code) Enter the value to put in the function: ");
        double x;
        scanf("%lf", &x);
        double a = differentiation(x);
        printf("%lf", a);
        reini();
    }
    else if (n==2)
    {
        printf("(function is to be entered in the code) Enter the limits: ");
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
        printf("%lf", loga(x));
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
    else if (n == 7)
    {
        printf("antilog(x) ");
        double x;
        scanf("%lf", &x);
        printf("%lf", antiloga(x));
        reini();
    }
    
}

void matrx()
{
    printf("\n\nAddition(1), Subtraction(2), Multiplication(3), Transpose(4)\n");
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("Row x Colomn: ");
        int m,n;
        scanf("%d %d", &m, &n);
        int a[m][n], b[m][n], c[m][n];
        printf("matrix a: \n");
        matrixscan(m, n, a);
        printf("matrix b: \n");
        matrixscan(m, n, b);
        matadd(m, n, a, b, c);
        printf("Ans: \n");
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        reini();
    }
    else if (n == 2)
    {
        printf("Row x Colomn: ");
        int m,n;
        scanf("%d %d", &m, &n);
        int a[m][n], b[m][n], c[m][n];
        printf("matrix a: \n");
        matrixscan(m, n, a);
        printf("matrix b: \n");
        matrixscan(m, n, b);
        matsub(m, n, a, b, c);
        printf("Ans: \n");
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        reini();
    }
    else if (n == 3)
    {
        printf("Row x Colomn: ");
        int m,n;
        scanf("%d %d", &m, &n);
        int a[m][n], b[m][n], c[m][n];
        printf("matrix a: \n");
        matrixscan(m, n, a);
        printf("matrix b: \n");
        matrixscan(m, n, b);
        matmul(m, n, a, b, c);
        printf("Ans: \n");
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        reini();
    }
    else if (n == 4)
    {
        printf("Row x Colomn: ");
        int m, n;
        scanf("%d %d", &m, &n);
        int a[m][n], c[m][n];
        printf("input matrix: ");
        matrixscan(m, n, a);
        mat_transpose(m, n, a, c);
        printf("Ans: \n");
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        reini();
    }
    
}

void stat()
{
    printf("\nMean(1), Median(2), Mode(3)\n");
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        int no_of_elem;
        float elem_array[no_of_elem];
        printf("enter the no of elements: ");
        scanf("%d", &no_of_elem);
        printf("enter the elements of the array: ");
        for(int i=0;i<no_of_elem;i++)
        {
            scanf("%f", &elem_array[i]);
        }
        printf("%f", Mean(no_of_elem, elem_array));
        reini();
    }
    else if (n == 2)
    {
        int no_of_elem;
        float elem_array[no_of_elem];
        printf("enter the no of elements: ");
        scanf("%d", &no_of_elem);
        printf("enter the elements of the array: ");
        for( int i=0;i<no_of_elem;i++)
        {
            scanf("%f", &elem_array[i]);
        }
        printf("%f", Median(no_of_elem, elem_array));
        reini();
    }
    else if (n == 3)
    {
        Mode();
        reini();
    }
}

void alge()
{   
    printf("\nEnter the function you need to do: Permutation(1), Combination(2), Equations((31)Linear, (32)Quadratic), Basic calutions(4), Complex(5), Matrix(6)\n");
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
    else if (n == 31)
    {
        printf("\n\nLinear mode has been activated\nEquation in the form ax + b = c \n");
        double a, b, c;
        printf("a = ");
        scanf("%lf", &a);
        printf("b = ");
        scanf("%lf", &b);
        printf("c = ");
        scanf("%lf", &c);
        printf("x = %lf", lineareq(a, b, c));
        reini();
    }
    else if (n == 32)
    {
        printf("\n\nQuadratic mode has been activated\nEquation in the form ax^2 + bx + c = 0 \n");
        double a, b, c;
        printf("a = ");
        scanf("%lf", &a);
        printf("b = ");
        scanf("%lf", &b);
        printf("c = ");
        scanf("%lf", &c);
        quad(a, b, c);
        reini();
    }
    else if (n == 5)
    {
        printf("Complex mode has been turned on");
        comp();
    }
    else if (n == 6)
    {
        printf("Matrix mode has been turned on");
        matrx();
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
        trig();
        break;
    case 4:
        stat();
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("Invalid Input: Reinitializing the calculator...\n");
        main();
        break;
    }
}