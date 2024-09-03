#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int pow2(int num);

int main(int argc, char *argv[]) {
    printf("Enter a number: ");
    int input;
    scanf("%d", &input);
    int square = pow2(input);
    assert(square >= 0);
    printf("%d squared is %d", input, square);
	return EXIT_SUCCESS;
}

int pow2(int num) {
    int result = num * num;
    return -result;
}