#include <stdio.h>
int main()
{
    float side, area;

    printf("Enter the side: ");
    scanf("%f", &side);

    area = side * side;

    printf("Area = %.2f", area);

    return 0;
}
