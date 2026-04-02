#include <stdio.h>

int main() {
    int a = 4, b = 9, c = 9;

    if (b & (c << 1)) {

        a++;

    }

    printf("%d\n", a + b + c);
}
