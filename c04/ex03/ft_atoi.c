#include <unistd.h>
#include <stdio.h>

// The ft_atoi function converts a string to an integer
int ft_atoi(char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;

    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (result * sign);
}

int main()
{
    char *test1 = "   -12345";
    char *test2 = "6789";
    char *test3 = "   +42";

    printf("Result (\"%s\"): %d\n", test1, ft_atoi(test1));
    printf("Result (\"%s\"): %d\n", test2, ft_atoi(test2));
    printf("Result (\"%s\"): %d\n", test3, ft_atoi(test3));

    return 0;
}
