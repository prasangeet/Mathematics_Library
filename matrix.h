#include<stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int matrixscan(int m, int n, int a[m][n])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &*(*(a+i)+j));
        }
    }
    return 0;
}

int matadd(int m, int n, int a[m][n], int b[m][n], int c[m][n])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    return 0;
}

int matsub(int m, int n, int a[m][n], int b[m][n], int c[m][n])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    return 0;
}

int matmul(int m, int n, int a[m][n], int b[m][n], int c[m][n])
{
    for(int i=0;i<m;i++)    
    {    
        for(int j=0;j<n;j++)    
        {    
            c[i][j]=0;    
            for(int k=0;k<n;k++)    
            {    
                c[i][j] += a[i][k] * b[k][j];    
            }    
        }    
    }
    return 0;
}

int mat_transpose(int m, int n, int a[m][n], int c[n][m])
{
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            c[j][i] = a[i][j];
        }
    }
    printf("Ans:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int determinant(int n, int mat[n][n]) 
{
    int deter = 0;
    for (int i = 0; i < n; i++) 
    {
        deter += (mat[0][i] * (mat[1][(i + 1) % n] * mat[2][(i + 2) % n] - mat[1][(i + 2) % n] * mat[2][(i + 1) % n]));
    }

    return deter;
}