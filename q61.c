#include <stdio.h>

int main() {
    int n, arr[100], key, index = -1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index == -1)
        printf("-1\n");
    else
        printf("Found at index %d\n", index);
    return 0;
}
