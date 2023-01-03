#include <stdio.h>

int get_sum(int n);
int get_sum1(int n); // for positive n
int get_sum2(int n); // for negative n
int print_result(int value, char* name);

int main() {
    int a = -999;
    int b = 999;
    print_result(a, "a");
    print_result(b, "b");
    return 0;
}



int get_sum(int n) {
    if (n > 0) {
        return get_sum1(n);
    } else if (n == 0) {
        return 0;
    } else {
        return get_sum2(n);
    }
}

int get_sum1(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + get_sum1(n / 10);
    }
}

int get_sum2(int n) {
    if (n / 10 == 0) {
        return (n % 10);
    } else {
        return -(n % 10) + get_sum2(n / 10);
    }
}

int print_result(int value, char* name) {
    int sum = get_sum(value);
    printf("%s = %d, sum of all digits = %d\n", name, value, sum);
    return sum;
}

// HW8 - main7.c
// Instructions: add up all decimal digits of an int.
