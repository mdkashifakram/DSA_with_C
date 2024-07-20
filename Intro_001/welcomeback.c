#include <stdio.h>

// Function declaration
int square(int num);

int main() {
    int number = 5;
    int result = square(number); // Function call
    printf("The square of %d is %d\n", number, result);
    return 0;
}

// Function definition
int square(int num) {
    return num * num;
}
