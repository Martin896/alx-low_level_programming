#include <stdio.h>
#include <stdlib.h>

/**
 * main - start of the program
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 **/

int main(int argc, char *argv[]) {
    
    if (argc == 1) 
    {
        printf("0\n");
        return 0;
    }

 
    int sum = 0;

    for (int i = 1; i < argc; i++) {
        char *endptr;
        long num = strtol(argv[i], &endptr);
        if (*endptr != '\0' || num < 0) {
            printf("Error\n");
            return (1);
        }
        if (num > (INT_MAX - sum)) {
            printf("Error: Integer overflow\n");
            return (1);
        sum += (int)num;
    }

    printf("%d\n", sum);

    return (0);
}
