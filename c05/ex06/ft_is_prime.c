#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;
    int prime;

    i = 2;
    prime = 0;

    if (nb < 2)
        return 0; 
    if (nb == i)
        return 1;  
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            prime++;  
        i++;
    }

    if (prime == 0)
        return 1;   
    else
        return 0;  
}

int main(void)
{
    int nb;
  nb = 2;
    printf("%d is prime: %d\n", nb, ft_is_prime(nb)); 
    nb = 17;
    printf("%d is prime: %d\n", nb, ft_is_prime(nb)); 
    nb = 15;
    printf("%d is prime: %d\n", nb, ft_is_prime(nb)); 
    nb = 29;
    printf("%d is prime: %d\n", nb, ft_is_prime(nb)); 
    nb = 0;
    printf("%d is prime: %d\n", nb, ft_is_prime(nb)); 
    nb = 1;
    printf("%d is prime: %d\n", nb, ft_is_prime(nb)); 

    return 0;
}
