#include <stdio.h> 

int main ()
{
    // Step 1: How many rows should I print?
    // n represents the number of rows of the pattern.
    int n;
    scanf("%d", &n);


    /*
    Step 2: What is the work?

    Every row has two tasks:

    1) Print spaces
    2) Print stars (*)

    For a centered reverse pyramid:
    
    - spaces increase by 1 every row
    - stars decrease by 2 every row


    Step 3: Set initial values.

    Space starts from 0 because the first row starts from the left.

    s = 0


    Stars need to start from the maximum width.

    The width follows odd numbers:

    n = 3:

    *****
     ***
      *

    stars:
    5, 3, 1


    n = 4:

    *******
     *****
      ***
       *

    stars:
    7, 5, 3, 1


    Formula for first row stars:

    k = 2*n - 1

    Because the pyramid width must always be odd.
    */

    int s = 0, k = 2*n - 1;


    // Outer loop controls the number of rows.
    for (int i = 1; i <= n; i++)
    {

        // Print spaces first.
        // Every next row needs one more space,
        // so the pyramid moves toward the center.
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }


        // Print stars.
        // Stars decrease by 2 every row:
        //
        // Row 1 -> 5 stars
        // Row 2 -> 3 stars
        // Row 3 -> 1 star
        //
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }


        // After completing one row:
        // increase spaces by 1
        // decrease stars by 2

        s++;
        k -= 2;


        printf("\n");
    }
    
    return 0;
}