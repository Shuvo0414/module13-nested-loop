#include <stdio.h>

int main()
{
    /*
    Step 1: Understand the problem.

    We have:
    n = how many numbers in array
    x = target sum

    Need to check:
    Is there any two different values in the array
    whose sum is equal to x?

    Example:

    n = 5
    x = 8

    array:
    2 7 5 10 3

    Check pairs:

    2 + 7
    2 + 5
    2 + 10
    ...

    If any pair = 8,
    answer is found.
    */

    int n, x;
    scanf("%d %d", &n, &x);

    /*
    Step 2:

    Create an array of size n.

    Because input contains n numbers.

    */

    int a[n];

    /*
    flag is used to remember whether we found a pair.

    Initially:

    0 means:
    no pair found yet

    If we find a pair:

    flag = 1

    */

    int flag = 0;

    // Take n values as input.
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /*
    Step 3: Check every possible pair.

    Outer loop selects the first number.

    Inner loop selects the second number.

    j starts from i + 1 because:

    We don't need to check the same pair twice.

    Example:

    2 + 5

    and

    5 + 2

    are the same pair.


    Also, a number cannot pair with itself.

    */

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            /*
            Check:

            first value + second value == target

            If true, we found the answer.

            */

            if (a[i] + a[j] == x)
            {
                flag = 1;
            }
        }
    }

    /*
    Step 4:

    After checking all pairs:

    If flag changed to 1:
    means a pair exists.

    Otherwise:
    no pair exists.

    */

    if (flag == 1)
    {
        printf("Sum Of Two Values Equal Of X");
    }
    else
    {
        printf("Sum Of Two Values Not Equal of x");
    }

    return 0;
}