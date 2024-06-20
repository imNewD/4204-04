
#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (result * ft_recursive_power(nb, power - 1));
}

int main(void)
{
    int nb = 2;
    int power = 4;

    printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));

    nb = 3;
    power = 3;
    
    printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));

    nb = 5;
    power = 0;

    printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));

    nb = 10;
    power = -2;

    printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));

    return (0);
}
