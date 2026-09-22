#include <stdio.h>

int main() {
    int r, c, a[20][20];
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int d = 0; d <= r + c - 2; d++) {
        int lo = d - (c - 1) > 0 ? d - (c - 1) : 0;
        int hi = d < r - 1 ? d : r - 1;

        if (d % 2 == 1) {
            for (int i = lo; i <= hi; i++)
                printf("%d ", a[i][d - i]);
        } else {
            for (int i = hi; i >= lo; i--)
                printf("%d ", a[i][d - i]);
        }
    }
    printf("\n");
    return 0;
}
