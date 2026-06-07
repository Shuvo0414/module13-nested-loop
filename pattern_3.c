#include <stdio.h>

int main()
{
    /*
    Step 1: How many rows should I print?

    n represents the height of the diamond.
    A diamond has two parts:

    1) Upper pyramid
    2) Lower reverse pyramid

    Both parts have two works:

    - Print spaces
    - Print stars (*)
    */

    int n;
    scanf("%d", &n);

    /*
    Step 2: Understand the first half (upper pyramid)

    Pattern:

        *
       ***
      *****
     *******
    *********

    Here:

    Space decreases every row.
    Star increases every row.


    Example n = 5:

    First row:
    spaces = 4
    stars  = 1


    So initial:

    s = n - 1
    k = 1
    */

    int s = n - 1, k = 1;

    // 1st loop creates the upper pyramid.
    for (int i = 1; i <= n; i++)
    {

        // Print spaces.
        // s tells how many spaces are needed before stars.
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        // Print stars.
        // k tells how many stars this row needs.
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        /*
        After printing one row:

        space decreases because the pyramid moves left.
        star increases because the pyramid becomes wider.

        Example:

        *
        ***
        *****
        */

        s--;
        k += 2;

        printf("\n");
    }

    /*
 Step 3: Prepare for the lower part.

 The middle row already printed the maximum width.

 Example n = 5:

 Top part:

     *
    ***
   *****
  *******
 *********

 Maximum stars = 2*n - 1
 Maximum = 9


 The bottom part should start from the next smaller odd number,
 because we don't want to print the middle row again.

 So:

 k = (2*n - 1) - 2

 k = 2*n - 3


 Example:

 9 - 2 = 7 stars

 Bottom starts:

  *******
   *****
    ***
     *

    Here:

    Spaces increase.
    Stars decrease.

 */
    // 2nd initialization for lower pyramid

    s = 1;
    k = 2 * n - 3;

    // n-1 because middle row is already printed.
    for (int i = 1; i <= n - 1; i++)
    {

        // Print spaces.
        // Space increases every row.
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        // Print stars.
        // Star decreases every row.
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        // Update values for next row.

        s++;
        k -= 2;

        printf("\n");
    }

    return 0;
}