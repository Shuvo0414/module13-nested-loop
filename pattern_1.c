#include <stdio.h>

int main()
{

    int n;
    /*
    1st step: n means how many times I need to do the work.
    // If the task needs to happen 3 times, I need to create 3 lines.
    // For that I need a loop which can do the task n times.
    */

    int k = 1; /*

    // k means how many times the star will print.
    // 3rd step: set the value of k.
    // Where should I declare it? Outside the loop or inside?
    // If the value changes only once and needs to remember the previous value,
    // then I keep it outside the loop.
    // Here k starts from 1 for the first line,
    // then becomes 2 for the second line,
    // then becomes 3 for the third line.

    */

    scanf("%d", &n);

    // Loop for printing n number of lines.
    for (int i = 1; i <= n; i++)
    {
        /*
        // 2nd step: what is the actual work?
        // The work is printing stars.
        // But star count is not fixed.
        // First line prints 1 star,
        // second line prints 2 stars,
        // third line prints 3 stars.
        // So star count depends on k.
        */
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        /*
         // 4th step:
         // k value is changing every line.
         // First line k = 1, second line k = 2, third line k = 3.
         // So after finishing one line, increase k.
        */
        k++;

        printf("\n");

        // printf("kaj korar loop mane n shongkhok bar line print kora \n");
    }

    return 0;
}