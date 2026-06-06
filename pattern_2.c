#include <stdio.h>

int main()
{
    // Step 1: How many times should I do the work?
    // Let n be the number of rows I need to print.

    int n;
    scanf("%d", &n);

    /*
    Step 2: What is the work?

    There are two tasks:
    1) Print spaces
    2) Print stars (*)

    Let space count be s.
    Let star count be k.

    Step 3: Set initial values for s and k.

    Space depends on n.
    For the first line, spaces are n - 1.
    So initially:
    s = n - 1

    Star starts from 1 because the first line contains 1 star.
    */

    int s = n - 1, k = 1;

    // Outer loop controls how many rows I print.
    for (int i = 1; i <= n; i++)
    {

        // This loop prints spaces s times before printing stars.
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        // This loop prints stars k times.
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        // After finishing one row:
        // Space count decreases by 1 because every next row needs less space.
        s--;

        // Star count increases by 2 because:
        // 1st row -> 1 star
        // 2nd row -> 3 stars
        // 3rd row -> 5 stars
        k = k + 2;

        printf("\n");
    }

    return 0;
}