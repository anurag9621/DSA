#include <stdio.h>
#include <conio.h>

int main()
{

    int firstNumber, secondNumber;
    int sum, difference, product, modulo;
    float quotient;

    printf("Enter First Number: ");
    scanf("%d", &amp; firstNumber);
    printf("Enter Second Number: ");
    scanf("%d", &amp; secondNumber);

    sum = firstNumber + secondNumber;
    difference = firstNumber - secondNumber;
    product = firstNumber * secondNumber;
    quotient = (float)firstNumber / secondNumber;
    modulo = firstNumber % secondNumber;

    printf("\nSum = %d", sum);
    printf("\nDifference  = %d", difference);
    printf("\nMultiplication = %d", product);
    printf("\nDivision = %.3f", quotient);
    printf("\nRemainder = %d", modulo);

    getch();
    return 0;
}