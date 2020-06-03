#include <cs50.h>
#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    int n = get_int("Enter number: ");

    for (int i = 0; i < n; i++)
    {
        printf("%i ", fibonacci(i));
    }
    printf("\n");
}

int fibonacci(int n)
{
    int i;

    if (n <= 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        i =  fibonacci(n - 1) + fibonacci(n - 2);
        return i;
    }
}
