#include <stdio.h>

int main() {
    int n, arr[101], x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);

    int i = n - 1;
    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = x;
    n++;

    for (int k = 0; k < n; k++)
        printf("%d ", arr[k]);
    printf("\n");
    return 0;
}
