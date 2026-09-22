#include <stdio.h>

int main() {
    long long n;
    int product = 1, found = 0;
    int odd[20], count = 0;
    scanf("%lld", &n);
    if (n < 0) n = -n;

    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 1) {
            odd[count++] = d;
            product *= d;
            found = 1;
        }
        n /= 10;
    }

    if (!found) {
        printf("1 (no odd digits, assume 1)\n");
        return 0;
    }

    printf("%d (", product);
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", odd[i]);
        if (i > 0)
            printf("*");
    }
    printf(")\n");
    return 0;
}
