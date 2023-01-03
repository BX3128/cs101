#include <stdio.h>
int main() {
    int rows = 10;
    int base = rows * 2 - 1;
    for (int i = 0; i < base * rows; i++) {
        int r = i % base;
        if (r < rows - i / base - 1) {
            printf("  ");
        } else if (r > base - rows + i / base) {
            i = (i / base + 1) * base - 1;
            printf("\n");
        } else {
            printf(" *");
        }
    }
    printf("\n");
    return 0;
}


// HW8 - main1.c
// Instruction: print a pymarid full of '*'
//
/*
#include <stdio.h>

void print_pyramid(int rows) {
    int base = rows * 2 - 1;
    for (int i = 0; i < base * rows; i++) {
        int r = i % base;
        if (r < rows - i / base - 1) {
            printf("  ");
        } else if (r > base - rows + i / base) {
            i = (i / base + 1) * base - 1;
            printf("\n");
        } else {
            printf(" *");
        }
    }
    printf("\n");
}

int my_strlen(char* str);
int my_atoi(char* str);

int main(int argc, char* argv[]) {
    int rows = 10;
    if (argc == 2) {
        rows = my_atoi(argv[1]);
    }
    print_pyramid(rows);
    
    return 0;
}

// count the length of a string ending with '\0'
int my_strlen(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;  // '\0' is NOT counted; to count it, remark this line ...
    }         // and change condition in the while statement from i to i++.
    return i;
}

// convert a string containing only a positive integer to an int
int my_atoi(char* str) {
    int len = my_strlen(str);
    int value = str[0] - '0';
    for (int i = 1; i < len; i++) {
        value = value * 10 + str[i] - '0';
    }
    return value;
}
*/
