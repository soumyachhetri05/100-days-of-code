#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 10) {
        printf("%d\n", n);
        return 0;
    }

    int p = 1, temp = n;
    while (temp >= 10) {
        p *= 10;
        temp /= 10;
    }

    int first = n / p;
    int last = n % 10;
    int middle = (n % p) / 10;

    printf("%d\n", last * p + middle * 10 + first);
    return 0;
}
