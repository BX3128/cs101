#include <stdio.h>       // printf()
int main() {
    for (int i = 0; i < 9*9; i++) {
        int x = i / 9 + 1;
        int y = i % 9 + 1;
        printf("%d*%d=%d\t", x, y, x*y);
        if (y == 9)
            printf("\n");
    }
    return 0;
}

//* HW7 - main3.c
// Instruction:
//    1. print out the Chinese multipilication table.
//
// Key Ideas: (1) counting
//            (2) the content to print is determined by index
// Features:
//   (*) using only one loop
//   (1) C-style comments
