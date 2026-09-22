#include <stdio.h>

int main() {
    int n, arr[101], pos, value;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d %d", &pos, &value);

    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
