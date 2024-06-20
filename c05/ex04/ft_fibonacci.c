#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return -1;

    if (index == 0)
        return 0;

    if (index == 1)
        return 1;  

    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main(void)
{
    int index;

    for (index = 0; index <= 10; index++)
    {
        printf("Fibonacci(%d) = %d\n", index, ft_fibonacci(index));
    }

    return 0;
}
