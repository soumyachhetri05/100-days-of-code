#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    scanf("%lld", &n);
    if (n < 0) n = -n;

    if (n == 0)
        count[0] = 1;
    while (n > 0) {
        count[n % 10]++;
        n /= 10;
    }

    int best = 0;
    for (int d = 1; d < 10; d++) {
        if (count[d] > count[best])
            best = d;
    }

    printf("%d\n", best);
    return 0;
}
