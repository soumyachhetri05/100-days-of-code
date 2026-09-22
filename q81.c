#include <stdio.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int count = 0;
    while (str[count] != '\0' && str[count] != '\n')
        count++;

    printf("%d\n", count);
    return 0;
}
