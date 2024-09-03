#include <stdio.h>
#include <stdlib.h>

int factorial(int num);

int main(int argc, char *argv[]) {
    int value, result;
    printf("Enter a positive number to compute the factorial of: ");
    scanf("%d", &value);

    result = factorial(value);
    printf("%d! is %d\n", value, result);
    return EXIT_SUCCESS;
}

int factorial(int num) {
    if(num <= 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}
