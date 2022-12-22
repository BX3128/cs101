#include <stdio.h>
int main() {
    int i = 10;
    if (i & (i - 1))
        printf("%d is false\n", i);
    else
        printf("%d is true\n", i);
    return 0;
}


/* HW6 - main0.c 
// Instruction:
//   1. Given a number, n (>0)
//   2. If n is power of 2, then print true;
//        otherwise, print false.
//   3. Use bitwise operators to handle this problem.
//   4. Assigned output format:
//        1 is true
//        2 is true
//        3 is false
//        4 is true
//    
// Key Idea: bitwise operation, i & i-1
// Features:
//   (1) ternary operator (a ? b : c)
//   (2) split of printf()
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
        for (int i = 1; i < argc; i++)
            message(atoi(argv[i]));

    return 0;            // exit program with error code 0
}

// Generate a message and print it on the screen.
void message(int v) {
    printf("%d is %s\n", v,
        (v & (v - 1)) ? "false" : "true");
}
*/
