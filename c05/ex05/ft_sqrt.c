#include <unistd.h>
#include <stdio.h>
int ft_sqrt(int nb)
{
    int rad_exp;

    rad_exp = 1;

    if (nb > 0)
    {
        while (rad_exp * rad_exp <= nb)
        {
            if (rad_exp * rad_exp == nb)
                return rad_exp;

            if (rad_exp > 46340)
                return 0;

            rad_exp++;
        }
    }

    return 0;
}



int main(void)
{
    int nb;

    nb = 16;
    printf("Square root of %d: %d\n", nb, ft_sqrt(nb)); 

    nb = 25;
    printf("Square root of %d: %d\n", nb, ft_sqrt(nb)); 

    nb = 144;
    printf("Square root of %d: %d\n", nb, ft_sqrt(nb));

    nb = 1000;
    printf("Square root of %d: %d\n", nb, ft_sqrt(nb));

    nb = -25;
    printf("Square root of %d: %d\n", nb, ft_sqrt(nb)); 

    return 0;
}
