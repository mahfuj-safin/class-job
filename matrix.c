/**
 * step-1: start.
 * step-2: Declare two matrices A and B, and a resultant matrix C.
 * step-3: input rows and columns of first matrix A.
 * step-4: input elements of first matrix
 * step-5: input rows and columns of second matrix B.
 * step-6: input elements of second matrix
 * step-7: check if the number of columns of first matrix is equal to the number of rows of second matrix.
 * step-8: if equal, perform matrix multiplication; otherwise, display an error message.
 * step-9: Initialize each element of matrix C to 0
 * step-10: Multiply the matrices using three nested loops and calculate C[i][j]
 * step-11: Display the resultant matrix C.
 * step-9: stop.
 */


#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication is not possible.");
    }
    else
    {
        printf("Enter first matrix elements:\n");

        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        printf("Enter second matrix elements:\n");

        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }

        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                C[i][j] = 0;

                for(k = 0; k < c1; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("Resultant Matrix:\n");

        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                printf("%d ", C[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}
