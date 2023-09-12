#include <stdio.h>
void matrix_add(int arr1[10][10], int arr2[10][10], int n1, int m1, int n2, int m2)
{
    int c[10][10];
    if (n1 == n2 && m1 == m2)
    {

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                c[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        printf("Matix after addition\n");
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Addition is not possible\n");
    }
}
void matrix_substract(int arr1[10][10], int arr2[10][10], int n1, int m1, int n2, int m2)
{
    int c[10][10];
    if (n1 == n2 && m1 == m2)
    {

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                c[i][j] = arr1[i][j] - arr2[i][j];
            }
        }
        printf("Matix after substraction\n");
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Substraction is not possible\n");
    }
}
void matrix_multiply(int arr1[10][10], int arr2[10][10], int n1, int m1, int n2, int m2)
{
    int c[10][10];
    if (m1 == n2)
    {
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < m1; k++)
                {
                    c[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        printf("Matrix after multiplication\n");
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Matrix multiplication is not posiible\n");
    }
}
void matrix_transpoze(int arr1[10][10], int n1, int m1)
{
    int c[10][10];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            c[j][i] = arr1[i][j];
        }
    }
    printf("Matrix after transpoze\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n1, n2, m1, m2, arr1[10][10], arr2[10][10], i = 0, decide, choice;
    while (i < 1000)
    {

        printf("\n Enter 1 for matrix addition \n Enter 2 for matrix substraction \n Enter 3 for matrix multipliacation\n Enter 4 for matrix transpoze\n");
        scanf("%d", &choice);
        if (choice == 4)
        {
            printf("Enter the number of rows of the matrix\n");
            scanf("%d", &n1);
            printf("Enter the number of coloumns of the matrix\n");
            scanf("%d", &m1);
            printf("Enter the elements of the matrix\n");
            for (int i = 0; i < n1; i++)
            {
                for (int j = 0; j < m1; j++)
                {
                    scanf("%d", &arr1[i][j]);
                }
            }
            printf("The first matrix is \n");
            for (int i = 0; i < n1; i++)
            {
                for (int j = 0; j < m1; j++)
                {
                    printf("%d ", arr1[i][j]);
                }
                printf("\n");
            }
            matrix_transpoze(arr1, n1, m1);
        }
        else
        {
            printf("Enter the number of rows of the 1st matrix\n");
            scanf("%d", &n1);
            printf("Enter the number of coloumns of the 1st matrix\n");
            scanf("%d", &m1);
            printf("Enter the elements of the first matrix\n");
            for (int i = 0; i < n1; i++)
            {
                for (int j = 0; j < m1; j++)
                {
                    scanf("%d", &arr1[i][j]);
                }
            }
            printf("The first matrix is \n");
            for (int i = 0; i < n1; i++)
            {
                for (int j = 0; j < m1; j++)
                {
                    printf("%d ", arr1[i][j]);
                }
                printf("\n");
            }
            printf("Enter the number of rows of the 2nd matrix\n");
            scanf("%d", &n2);
            printf("Enter the number of coloumns of the 2nd matrx\n");
            scanf("%d", &m2);
            printf("Enter the elements of the 2nd matrix\n");
            for (int i = 0; i < n2; i++)
            {
                for (int j = 0; j < m2; j++)
                {
                    scanf("%d", &arr2[i][j]);
                }
            }
            printf("The 2nd matrix is\n");
            for (int i = 0; i < n2; i++)
            {
                for (int j = 0; j < m2; j++)
                {
                    printf("%d ", arr2[i][j]);
                }
                printf("\n");
            }
            switch (choice)
            {
            case 1:
                matrix_add(arr1, arr2, n1, m1, n2, m2);
                break;
            case 2:
                matrix_substract(arr1, arr2, n1, m1, n2, m2);
                break;
            case 3:
                matrix_multiply(arr1, arr2, n1, m1, n2, m2);
                break;
            default:
                break;
            }
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
