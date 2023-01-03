#include <stdio.h>

void get_binary(int n) {
    unsigned int mask = 1 << sizeof(n) * 8 - 1;
    printf("%d -> \t", n);
    for (int i = 0; i < sizeof(n) * 8; i++) {
        printf("%c", n & mask ? '1' : '0');
        mask = mask >> 1;
        if ((i + 1) % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    get_binary(6);
    get_binary(16);
    get_binary(255);
    return 0;
}

// HW8 - main3.c
// Instruction: output binary representation of an int
// Format: 4 bits in a printf group, separated by a space
//
// Troubleshooting:
// (1) shift operator + signed int = bug
// Solution: The bitwise mask should be declared as an unsigned int.
// Details:  The right shift operator is implemented as an arithmetic 
//           right shift operator but not a logical one in C.
//
// (2) i % 4 == 0 (NG) (at line 9)
// Solution: (i + 1) % 4 == 0
//
// Todo:
// (1) Better printf formatting for n >= 10000.
//     Using "\t" might not be the best solution for a neat presentation.
