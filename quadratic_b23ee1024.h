#include<stdio.h>
#include<math.h>

double quad(double a, double b, double c){
    float x,y,D;
    D=b*b-4*a*c;
    if (a == 0){
        if (b == 0) {
            printf("no solution\n");
        } else {
             x =-c/b;
             printf("%f",x);
        }
    } else {
        if (D > 0) {
            x= (-b + sqrt(D)) / (2 * a);
            y = (-b - sqrt(D)) / (2 * a);
            printf("Root1 = %.2f and Root2 = %.2f\n",x,y);
        } 
        else if (D == 0) {
               x = -b / (2 * a);
               printf("Root= %.2lf\n",x);
        }
        else {
             double  r = -b / (2 * a);
             double i = sqrt(-D) / (2 * a);
             printf("Root1 = %.2lf + i%.2lf and Root2 = %.2lf -%.2lfi \n", r,i,r,i);
        }
    }
    return 0;
}