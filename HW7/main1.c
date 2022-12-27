#include <stdio.h>
int main() {
    int n = 7;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + i + 1; j++)
            if (j < n - i)
                printf(" ");
            else if ((j - n + i) % 2)
                printf(" ");
            else
                printf("%d", i + 1);
        printf("\n");
    }
    return 0;
}

/*/ HW7 - main1.c
// Instruction:
//   1. Given an integer, n.
//   2. Using two loops to print something like:
//                1
//               2 2
//              3 3 3
//             4 4 4 4
//            5 5 5 5 5
//           6 6 6 6 6 6
//          7 7 7 7 7 7 7
// Key Ideas: (1) counting
//            (2) the content to print is determined by index
// Features:
//   (*) using two loops
//   (1) ternary operator (a ? b : c)
//   (2) split of printf()
//   (3) argc/argv with loop
//   (4) atoi() with <stdlib.h>
//   (5) function & function prototype
//   (6) C-style comments

#include <stdio.h>       // printf()
#include <stdlib.h>      // atoi()

// function prototype
void message(int n);

// main()
int main(int argc, char* argv[]) {
    if (argc == 1)
        message(7);      // default behavior if no argument
    else
        for (int i = 1; i < argc; i++)
            message(atoi(argv[i]));

    return 0;            // exit program with error code 0
}

// Generate an ouput and print it to the screen.
void message(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i + i * 2 + 1; j++) {
            if (j < n - i)
                printf(" ");
            else if ((j - n + i) % 2)
                printf(" ");
            else
                printf("%d", i + 1);
        }
        printf("\n");
    }
}
*/
