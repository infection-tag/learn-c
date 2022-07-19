#include <stdio.h>

/* fact.c: print out the factorial values from zero to fifty using just an int */
/* Naturally,this code will overflow. That's the point. */
/* As I stated previously,
    n! = n * (n - 1)! */
/* Given 0! = 1 */

int main() {
    int total, counter;
    for(total = 1, counter = 1; counter <= 50; counter++) {
        total *= counter; /*n! = n * (n - 1)!*/
        printf("%d! = %d\n", counter, total);
    }
}