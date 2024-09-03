#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]) {
	int *var = malloc(sizeof(int));
	*var = 4;
	printf("The value of var is: %d\n", *var);
	free(var);
    printf("Out of bounds access: %s\n", argv[0]);
	return EXIT_SUCCESS;
}

