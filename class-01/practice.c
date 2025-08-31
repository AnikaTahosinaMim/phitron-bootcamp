#include <stdio.h>
int main()
{
    /*
    1 no pratice
    sum of three numbers
    */

    int a, b, c, sum;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("%d\n", sum);

    /*
    2 no practice
    avarage of four numbers
    */
    int num1, num2, num3, num4;
    float avarage, sum2;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    sum2 = num1 + num2 + num3 + num4;

    avarage = sum2 / 4;
    printf("Avarage is = %.2f\n", avarage);
    /*
    3 no practice
    area of triangle
    */
    int base, height;
    printf("Enter base and height of triangle: ");
    scanf("%d %d", &base, &height);
    float area;
    area = 0.5 * base * height;
    printf("Area of triangle is = %.2f\n", area);
    /*
    4 no practice
    area of Rectangle
    */
    int length, width;
    printf("Enter length and width of Rectangle: ");
    scanf("%d %d", &length, &width);
    float area2;
    area2 = length * width;
    printf("Area of Rectangle is = %.2f\n", area2);

    return 0;
}