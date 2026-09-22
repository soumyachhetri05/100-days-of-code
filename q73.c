#include <stdio.h>

int main() {
    int r, c, a[20][20], rowSum[20];
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    for (int i = 0; i < r; i++)
        printf("%d ", rowSum[i]);
    printf("\n");
    return 0;
}
