// #include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    write(fd, &n, 1);
}

int main()
{
    ft_putnbr_fd(49, 1);
}