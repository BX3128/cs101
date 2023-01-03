#include <stdio.h>

int round_func(float f) {
    int value = f + (((int) (f * 10)) % 10) / 5;
    printf("%f -> %d\n", f, value);
    return value;
}

int main() {
    round_func(1.4);
    round_func(2.6);
    round_func(2.34);
    round_func(9.2344567789);
}

// HW8 - main4.c
// Instruction: round function
