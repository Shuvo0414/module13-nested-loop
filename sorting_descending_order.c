#include <stdio.h>

int main()
{
    /*
    Step 1: Understand the problem.

    We need to arrange the array in descending order.

    Descending means:

    Bigger value comes first.
    Smaller value comes last.

    Example:

    Input:
    2 10 7 5 3

    Output:
    10 7 5 3 2

    */

    int n;
    scanf("%d", &n);

    // Create array to store n numbers.
    int a[n];

    // Take input values.
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /*
    Step 2: Sorting logic.

    Outer loop selects a position.

    Inner loop checks all values after that position.

    If current value is smaller than the next value,
    swap them.

    Because we want bigger values on the left side.

    Example:

    2 10 7 5 3

    2 < 10

    So swap:

    10 2 7 5 3

    */

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            /*
            If left value is smaller than right value,
            exchange their positions.

            Bigger value moves to the left.
            Smaller value moves to the right.

            */

            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    /*
    Step 3:

    After all comparisons,
    the array is sorted from biggest to smallest.

    Now print the final result.

    */

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}