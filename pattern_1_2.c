#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int k = n; // If I declare k = n before reading input, k gets a garbage value because n is not initialized yet(scanf("%d", &n)).

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        k--;
        printf("\n");
    }

    return 0;
}