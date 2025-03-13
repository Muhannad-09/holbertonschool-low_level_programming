#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - Checks if a string contains only digits.
 * @s: The string to check.
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * _strlen - Calculates the length of a string.
 * @s: The string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	len++;

	return (len);
}

/**
 * errors - Prints an error message and exits with status 98.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * initialize_result - Initializes the result array to store the product.
 * @len: The length of the result array.
 * Return: Pointer to the initialized array, or NULL if allocation fails.
 */
int *initialize_result(int len)
{
	int *result = calloc(len, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	return (result);
}

/**
 * calculate_product - Performs the multiplication of two strings.
 * @num1: First number as a string.
 * @num2: Second number as a string.
 * @result: The array to store the product.
 * @len1: Length of num1.
 * @len2: Length of num2.
 */
void calculate_product(char *num1, char *num2, int *result, int len1, int len2)
{
	int i, j, carry, digit1, digit2;

	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = num2[j] - '0';
			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}
}

/**
 * result_to_string - Converts the result array to a string.
 * @result: The array holding the product digits.
 * @len: Length of the result array.
 * Return: Pointer to the result string, or NULL on failure.
 */
char *result_to_string(int *result, int len)
{
	char *output = malloc(len + 1);
	int i = 0, j = 0;

	if (output == NULL)
	{
		free(result);
		printf("Error\n");
		exit(98);
	}

	while (i < len)
	{
		if (result[i] != 0 || j > 0)
		output[j++] = result[i] + '0';
		i++;
	}
	output[j] = '\0';

	if (j == 0)
	{
		output[j++] = '0';
		output[j] = '\0';
	}

	free(result);
	return (output);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The argument vector.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result_str;
	int len1, len2, len, *result;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;

	result = initialize_result(len);
	calculate_product(num1, num2, result, len1, len2);
	result_str = result_to_string(result, len);

	printf("%s\n", result_str);
	free(result_str);

	return (0);
}
