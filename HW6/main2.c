#include <stdio.h>
int main() {
    int i = 10;

    printf("%i is %s\n", i, (i % 2) ? "odd" : "oven");

    return 0;
}
