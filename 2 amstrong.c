#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, r = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        r+= remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(r == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}
