#include <stdio.h>

int main()
{
    /*
    Step 1: Understand the problem.

    We have n numbers in an array.

    Our goal:
    Arrange the numbers from smallest to largest.

    Example:

    Input:
    2 10 7 5 3

    Output:
    2 3 5 7 10


    To do this:
    Compare one value with the values after it.
    If a smaller value is found, swap them.

    */

    int n;
    scanf("%d", &n);

    /*
    Step 2:

    Create an array of size n.

    Because we need to store n numbers.

    */

    int a[n];

    // Take array values as input.
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /*
    Step 3:

    Sorting logic.

    Outer loop chooses the current position.

    Inner loop checks all values after it.


    Example:

    i = 1

    Current value:

    10

    Compare with:

    7, 5, 3


    If current value is bigger:

    swap them.

    */

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            /*
            If left value is bigger than right value,
            exchange their positions.

            Bigger value moves to the right.
            Smaller value moves to the left.

            */

            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    /*
    Step 4:

    After all comparisons,
    the array is sorted.

    Now print the final array.

    */

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}