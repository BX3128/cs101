#include <stdio.h>            // printf()
int main() {
    int n = 12345;
    int t = n / 1000 % 10;    // digit in thousands palce
    int o = n % 10;           // digit in ones place
    printf("%d\n", n + 999*(o - t)); // n - o + t - t*1000 + o*1000
    return 0;
}



/* HW7 - main4.c
// Instruction:
//    1. Given a positive integer n.
//    2. Swap the digit in ones place with that in thousands place.
//    3. *Consider n as a decimal.
//    4. If n is smaller than 999, i.e., there is no digit in
//       thousands place, then use zero as the digit.
//
// Key Ideas: (1) counting
//            (2) the content to print is determined by index
// Features:
//   (*) using only one loop
//   (1) C-style comments

#include <stdio.h>            // printf()
#include <stdlib.h>           // atoi()

int main(int argc, char* argv[]) {
    int n = 12345;
    if (argc == 2)
        n = atoi(argv[1]);
    int t = n / 1000 % 10;    // digit in thousands palce
    int o = n % 10;           // digit in ones place
    printf("%d\n", n + 999*(o - t)); // n - o + t - t*1000 + o*1000
    return 0;
}
*/
