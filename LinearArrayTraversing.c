/**
 * step-1: start.
 * step-2: declare array A[100], variable n, i.
 * step-3: input array elements number n
 * step-4: for i = 0 to i < n and input array elements A[i]. 
 * step-5: for i = 0 to i < n and print array elements A[i].
 * step-6: output A[i]
 * step-7: stop.
 */


#include <stdio.h>

int main()
{
    int A[100], N, i;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    printf("Enter array elements:\n");

    for(i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Array elements are:\n");

    for(i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
