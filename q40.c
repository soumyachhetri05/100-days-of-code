#include <stdio.h>

int main() {
    char bin[64];
    scanf("%63s", bin);

    for (int i = 0; bin[i] != '\0'; i++)
        printf("%c", bin[i] == '0' ? '1' : '0');
    printf("\n");
    return 0;
}
