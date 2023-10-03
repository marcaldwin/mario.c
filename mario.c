#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("height: ");
    }
    while (n < 1);

    for (int i = 1; i <= n; i++)
    {
        for (int w = i; w < n; w++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}