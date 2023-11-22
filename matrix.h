#include<stdio.h>

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
}

int mat_transpose(int m, int n, int a[m][n], int c[m][n])
{
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[j][i];
        }
    }
}