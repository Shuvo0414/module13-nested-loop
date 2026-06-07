#include <stdio.h>

// Another way to print diamond pattern using one outer loop.

int main()
{
    /*
    Step 1: Understand the total number of rows.

    A diamond has two parts:

    Upper pyramid:
    n rows

    Lower pyramid:
    n - 1 rows

    Total rows:

    n + (n - 1)

    = 2*n - 1

    Example n = 5:

        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *

    Total rows = 9

    */

    int n, s, k;

    scanf("%d", &n);

    /*
    Step 2: Initial values.

    First row needs:

        *

    So:

    spaces = n - 1
    stars  = 1

    Example n = 5:

    s = 4
    k = 1

    */

    s = n - 1;
    k = 1;

    /*
    Step 3:

    One loop will handle both parts.

    Before middle row:

    spaces decrease
    stars increase


    After middle row:

    spaces increase
    stars decrease


    The variable i tells us which row we are on.

    Middle row is:

    i = n


    So:

    i < n  → upper pyramid
    i >= n → lower pyramid

    */

    for (int i = 1; i <= (2 * n) - 1; i++)
    {

        // Print spaces first.
        // s controls the position of the stars.

        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        // Print stars.
        // k controls the width of each row.

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        /*
        Update values for the next row.

        Upper part:

        s--  because spaces are getting smaller.
        k+=2 because stars increase.

        Lower part:

        s++ because spaces are getting bigger.
        k-=2 because stars decrease.

        */

        if (i < n)
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }

        printf("\n");
    }

    return 0;
}