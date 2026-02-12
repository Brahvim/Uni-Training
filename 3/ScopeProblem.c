#include <stdio.h>
int /* register */ temp001 = 10;

void func() {
    int temp001 = 20;
    printf("%d\n", temp001);
}

int main() {
    func();
}
