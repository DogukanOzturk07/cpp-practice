/*
Topic: Nested Loops and Star Pattern

Why is this important for arrays?

Before learning arrays deeply, we need to understand loops very well.
Arrays store multiple values using indexes:

    arr[0], arr[1], arr[2], arr[3], ...

To visit array elements one by one, we usually use a for loop.

Nested loops are also important because later we will use them for:
- 2D arrays
- matrices
- tables
- grids
- image pixels
- tree-like visual structures

In this example, we print a triangle pattern using nested for loops.

Pattern example for star = 5:

*
**
***
****
*****

The outer loop controls the rows.
The inner loop controls how many stars are printed in each row.
*/

#include <cstdio>

int main() {
    int star;

    // Ask the user how many rows the triangle should have.
    printf("Enter the number of star '*':\n");

    // Read the number entered by the user and store it in the variable 'star'.
    scanf("%d", &star);

    /*
    Outer loop:
    This loop controls the number of rows.

    If star = 5:
    i = 0 -> first row
    i = 1 -> second row
    i = 2 -> third row
    i = 3 -> fourth row
    i = 4 -> fifth row

    We use i < star because counting starts from 0.
    So for star = 5, the loop runs 5 times: 0, 1, 2, 3, 4.
    */
    for (int i = 0; i < star; i++) {

        /*
        Inner loop:
        This loop prints stars in the current row.

        We use j <= i because:
        - when i = 0, print 1 star
        - when i = 1, print 2 stars
        - when i = 2, print 3 stars
        - when i = 3, print 4 stars

        So each row prints i + 1 stars.
        */
        for (int j = 0; j <= i; j++) {
            printf("*");
        }

        // Move to the next line after printing stars for one row.
        printf("\n");
    }

    return 0;
}
