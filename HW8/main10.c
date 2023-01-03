#include <stdio.h>

int get_digit(int n) {
    int value = 0, nn = n;
    while (nn > 0) {
        value *= 10;
        value += nn % 10;
        nn /= 10;
    }
    return value;
}

int main() {
    int n = 1234;
    int sum = 0;
    sum = get_digit(n);
    printf("sum = %d\n", sum);
    //printf("%d --> %d\n", 4443, get_digit(4443));
    return 0;
}

// HW8 - main10.c
// Instructions: inverse the order of decimal digits of
//               a positive integer.
// Example:      Input = 1234 --> Output = 4321
/*
int get_digit(int n) {
    static int value = 0, not_in_use = 1;
    if (n == 0) {
        if (not_in_use) {
            value = 0;
        }
        not_in_use = 1;
        return value;
    }
    if (not_in_use) {
        not_in_use = 0;
        value = 0;
    }
    value *= 10;
    value += n % 10;
    return get_digit(n / 10);
}

int main() {
    int n = 1234;
    int sum = 0;
    sum = get_digit(n);
    printf("sum = %d\n", sum);
    //printf("443321 -> %d\n", get_digit(443321));
    //printf("123 -> %d\n", get_digit(123));
    //printf("700 -> %d\n", get_digit(700));
    //printf("6 -> %d\n", get_digit(6));
    //printf("0 -> %d\n", get_digit(0));
    //printf("660 -> %d\n", get_digit(660));
    return 0;
}
*/
