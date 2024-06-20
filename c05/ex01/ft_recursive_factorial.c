#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
	printf("4! = %d\n", ft_recursive_factorial(4));    // Expected output: 24
	printf("0! = %d\n", ft_recursive_factorial(0));    // Expected output: 1
	printf("-3! = %d\n", ft_recursive_factorial(-3));  // Expected output: 0
	printf("5! = %d\n", ft_recursive_factorial(5));    // Expected output: 120
	printf("1! = %d\n", ft_recursive_factorial(1));    // Expected output: 1
	return (0);
}