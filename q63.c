#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int n, m, k = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n; i++)
        merged[k++] = a[i];
    for (int i = 0; i < m; i++)
        merged[k++] = b[i];

    for (int i = 0; i < k; i++)
        printf("%d ", merged[i]);
    printf("\n");
    return 0;
}
