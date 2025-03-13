#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit_string - Check if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_digit_string(char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return (0);
        str++;
    }
    return (1);
}

/**
 * main - Multiply two positive numbers passed as arguments.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    long num1, num2;
    
    /* Check if the correct number of arguments is passed */
    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    /* Check if both arguments are valid positive numbers */
    if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
    {
        printf("Error\n");
        exit(98);
    }

    /* Convert arguments to integers */
    num1 = atol(argv[1]);
    num2 = atol(argv[2]);

    /* Multiply the numbers */
    printf("%ld\n", num1 * num2);

    return (0);
}
