#include<stdio.h>
#include<stdlib.h>

int reini()
{
    printf("\n\n\nReinitialize the Calculator(1) / Exit (2) ?\n");
    int a;
    scanf("%d", &a);
    if (a == 1)
    {
        main();
    }
    else if (a == 2)
    {
        exit(0);
    }
    else
    {
        printf("Invalid option\n");
        reini();
    }
}