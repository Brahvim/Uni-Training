#include <stdio.h>

int main(int argc, char const *argv[]) {

    int twoButNum = 1;
    printf("%d%d",
        twoButNum & 1 ? "0" : "1",
        twoButNum & 2 ? "0" : "1"
    );

    return 0;
}
