#include <stdio.h>

int main() {
    int a, b, lcm, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; ; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    printf("LCM = %d\n", lcm);

    return 0;
}