#include<stdio.h>

long long int fact(int n)
{
    int fact = n;
    if (fact == 0)
    {
        return 1;
    }
    else
    {
        for (int i = n - 1; i > 0; i--)
        {
            fact *= i;
        }
        return fact;
    }    
}

long long int permutation(int n, int r)
{
    long long int a = fact(n), b = fact(n-r);
    if (r>n)
    {
        printf("Invalid Input: {r cannot be greater than n}\n");
        return 0;
    }
    else
    return (a/b);
}

long long int combination(int n, int r)
{
    if (r>n)
    {
        printf("Invalid Input: {r cannot be greater than n}");
        return 0;
    }
    else
    return (fact(n)/(fact(r)*fact(n-r)));
}