#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (result);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

int	main(void)
{
	printf("Factorial of %d is %d\n", 5, ft_iterative_factorial(5));
	printf("Factorial of %d is %d\n", 0, ft_iterative_factorial(0));
	printf("Factorial of %d is %d\n", -3, ft_iterative_factorial(-3));
	printf("Factorial of %d is %d\n", 10, ft_iterative_factorial(10));
	return (0);
}