#include <stdio.h>

int ft_is_prime(int nb)
{
    int i = 2;
    
    if (nb < 2)
        return 0; 
    
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return 0; 
        i++;
    }
    
    return 1; 
}

int ft_find_next_prime(int nb)
{
    int i = nb;

    while (!ft_is_prime(i))
    {
        i++; 
    }
    
    return i; 
}

int main()
{
    int number = 1;
    printf("Is %d prime? %s\n", number, ft_is_prime(number) ? "of course" : "negativ");
    
    int next_prime = ft_find_next_prime(number);
    printf("Next prime number after %d is %d\n", number, next_prime);
    
    return 0;
}
