#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	printf("2^3 = %d\n", ft_iterative_power(2, 3));
	printf("5^0 = %d\n", ft_iterative_power(5, 0));
	printf("3^-2 = %d\n", ft_iterative_power(3, -2));
	printf("7^2 = %d\n", ft_iterative_power(7, 2));
	printf("10^1 = %d\n", ft_iterative_power(10, 1));
	return (0);
}
