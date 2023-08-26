#include <stdio.h>

void matrix_add(int n, int m, int arr1[10][10], int arr2[10][10])
{
    int arr3[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Matrix after addition\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
void matrix_substract(int n, int m, int arr1[10][10], int arr2[10][10])
{
    int arr3[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("Matrix after substraction\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
void matrix_multiply(int n, int m, int a[10][10], int b[10][10])
{
    int c[10][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("array after multiplication\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
void matrix_transpoze(int n, int m, int a[10][10], int b[10][10])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("Array after transpoze\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n, m, a[10][10], b[10][10], choice, i = 0, decide;
    while (i < 1000)
    {

        printf("Enter the number of the rows of the matrices\n");
        scanf("%d", &n);
        printf("Enter the number of coloumns of the matrices\n");
        scanf("%d", &m);
        printf("Enter the elements of the 1st matrix\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("The 1st matrix \n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("Enter the elements of the 2nd matrix\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("The 2nd matrix \n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        printf("\nEnter 1 for matrix addition \n Enter 2 for matrix substraction \n Enter 3 for matrix multipliacation\n Enter 4 for matrix transpoze\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            matrix_add(n, m, a, b);
            break;
        case 2:
            matrix_substract(n, m, a, b);
            break;
        case 3:
            matrix_multiply(n, m, a, b);
            break;
        case 4:
            matrix_transpoze(n, m, a, b);
        default:
            break;
        }
        printf("Press 1 if you want to continue, else press any other number to exit\n");
        scanf("%d", &decide);
        if (decide == 1)
        {
            main();
        }
        else
        {
            break;
        }

        i++;
    }
    return 0;
}
