#include <stdio.h>
#define f(x) x *x *x - 4 * x - 9
#define e 0.001

int main() {
    float x1, x2, x0, x02 = 0, y1 = 1, y2 = 1, y0, d;
    int r1, r2, count, notFound;

    do {
        // To take the ranges until we get a match
        /* printf("Enter the range."); */
        /* scanf("%d%d", &r1, &r2); */
        r1 = -5;
        r2 = 5;
        int i;

        for (i = r1; i + 1 <= r2; i++) {
            // To get all the values in the range
            if (y1 * y2 > 0) {
                // if not found
                x1 = i;
                x2 = i + 1;
                y1 = f(x1);
                y2 = f(x2);
                count++;
                }

            else {
                // if found
                notFound = 0;
                break;
                }
            }

        if ((r2 - r1) == count) {
            printf("\nNo root found in the range.");
            notFound = 1;
            }
        }
    while (notFound);

    do {
        x02 = x0;
        x0 = (x1 + x2) / 2;
        y0 = f(x0);

        if (y1 * y0 < 0) {
            x2 = x0;
            }

        else if (y2 * y0 < 0) {
            x1 = x0;
            }

        d = x02 > x0 ? x02 - x0 : x0 - x02;

        }
    while (d > e);

    printf("The root is %f", x0);

    return 0;
    }
