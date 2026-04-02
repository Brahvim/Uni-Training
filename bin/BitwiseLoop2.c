#include <stdio.h>

int main() {
    int value = 1, n = 45;

    while (value <= n) {

        value <<= 1;

    }

    printf("%d\n", value);
}
