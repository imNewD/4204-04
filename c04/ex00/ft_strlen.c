#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
/*
int main()
{
    char str[] = "katchaw!";
    int length;

    // Get the length of the string
    length = ft_strlen(str);

    // Print the length
    printf("LENGHT = %d\n", length); 

    return 0;
}
*/