#include <stdio.h>
int main() {
    int i = 10;
    if (i & 1)
	    printf("odd\n");
    else
	    printf("even\n");
    return 0;
}

/* HW6 - main2.c 
// Instruction:
//   1. Given a number, n
//   2. Examine n, print even if n is even;
//                 print odd if n is odd.
//    
// Key Idea: bitwise operation, i & 1,
//           which checks if n is even or odd
//           via the LSB (least significant bit),
//           where the const int 1 is used as a mask.
// * Alternative: i % 2 
// Features:
//   (1) ternary operator (a ? b : c)
//   (2) split of printf()
//   (3) argc/argv with loop
//   (4) atoi() with <stdlib.h>
//   (5) function & function prototype
//   (6) C-style comments

#include <stdio.h>       // printf()
#include <stdlib.h>      // atoi()

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
        (v & 1) ? "odd" : "even");
}
*/
