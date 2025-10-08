#include <stdio.h>

int main() {
    printf("%d\n", 15 + 7 * 3 - 8 * (4, 5));
    //       vvvvv Mult FIRST!
    // 15 + (7 * 3) - 8 * (4, 5)
    // 15 + 21 - 8 * (4, 5)
    // 36 - 40
    // -4
}
