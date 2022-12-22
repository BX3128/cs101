#include <stdio.h>
int main() {
    int i = 10;
    if (i % 15 == 0)
        printf("Love IU\n");
    else if (i % 3 == 0)
        printf("Love\n");
    else if (i % 5 == 0)
        printf("IU\n");
    else
        printf("%d\n", i);
    return 0;
}


/* HW6 - main1.c 
// Instruction:
//   1. Given a number, n (>0)
//   2. If n mod 3 == 0, then only print Love
//   3. IF n mod 5 == 0, then only print IU
//   4. If n mod 15 == 0, then only print Love IU
//   5. If none of above criteria satisfied,
//        then only print the digit.
// Key Idea: print message one by one without using \n
// Features:
//   (1) modulo (%)
//   (2) argc/argv with loop
//   (3) atoi() with <stdlib.h>
//   (4) type bool <stdbool.h>
//   (5) function & function prototype
//   (6) C-style comments

#include <stdio.h>       // printf()
#include <stdlib.h>      // atoi()
#include <stdbool.h>     // bool, not necessary to g++

// function prototype
void message(int v);

// main()
int main(int argc, char* argv[]) {
    if (argc == 1)
        message(10);     // default behavior if no arguments
    else
        for (int i = 1; i < argc; i++) {
            int v = atoi(argv[i]);
            printf("In: %d, Out: ", v);
            message(v);
        }

    return 0;
}

// Generate a message and print it on the screen.
void message(int v) {
    bool bPrinted = false;
    if (v % 3 == 0) {
        bPrinted = true;
        printf("Love");
    }
    if (v % 5 == 0) {
        if (bPrinted)
            printf(" ");
        bPrinted = true;
        printf("IU");
    }
    if (!bPrinted)
        printf("%d", v);
    printf("\n");
}
*/
