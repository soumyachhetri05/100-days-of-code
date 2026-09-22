#include <stdio.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n')
        len++;

    int isPalin = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalin = 0;
            break;
        }
    }

    printf(isPalin ? "Palindrome\n" : "Not palindrome\n");
    return 0;
}
