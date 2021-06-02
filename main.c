#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 10;
    int b = 20;
    bool c;

    c = !(a > b);

    printf("%d\n\r", c);
    return 0;
}
