#include <stdio.h>

int main() {
    int r, c, a[20][20], sum = 0;
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("%d\n", sum);
    return 0;
}
