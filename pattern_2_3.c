#include <stdio.h>

int main()
{
    // Step 1: How many rows should I print?
    // n represents the height of the pyramid.

    int n;
    scanf("%d", &n);

    /*
    Step 2: Understand the pattern.

    This is a diamond pattern.
    It has two parts:

    1) Top part:
       Reverse pyramid

    2) Bottom part:
       Normal pyramid


    Every row has two tasks:

    1) Print spaces
    2) Print stars (*)


    Top part:

    Spaces increase by 1 every row.
    Stars decrease by 2 every row.


    For n = 6:

    ***********
     *********
      *******
       *****
        ***
         *


    The first row has maximum stars.

    Formula:

    k = 2*n - 1

    because the width of the pyramid is always odd.


    Initially:

    s = 0  (no spaces in first row)
    k = maximum stars
    */

    int s = 0, k = n * 2 - 1;

    // Loop for the top reverse pyramid.
    // Runs n times because top part has n rows.
    for (int i = 0; i <= n - 1; i++)
    {

        // Print spaces.
        // Space count increases every row.
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        // Print stars.
        // Star count decreases by 2 every row.
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        // After every row:
        // move stars to the right
        // reduce star count

        s++;
        k -= 2;

        printf("\n");
    }

    /*
    Now create the bottom part.

    The middle row already printed:

         *

    So we don't print it again.

    Bottom pyramid starts with:

    stars = 3

    spaces = n - 2


    Example:

    n = 6

        ***
       *****
      *******
     *********
    ***********

    Here:
    spaces decrease
    stars increase by 2
    */

    s = n - 2;
    k = 3;

    // Loop for the bottom normal pyramid.
    // n-1 because middle row is already printed.
    for (int i = 1; i <= n - 1; i++)
    {

        // Print spaces.
        // Spaces decrease every row.
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        // Print stars.
        // Stars increase by 2 every row.
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        // Update for next row.
        s--;
        k += 2;

        printf("\n");
    }

    return 0;
}