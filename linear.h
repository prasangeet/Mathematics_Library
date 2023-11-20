#include<stdio.h>
double lineareq(double a, double b, double c){
    double x;
    if (a == 0) {
        if (b == 0) {
            printf("no solution\n");
        } else {
            printf("no solution\n");
        }
    } else {
        x =(c-b) / a;
    }
    return x;
}