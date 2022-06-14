#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putnbr_fd(int n, int fd)
{
    unsigned int    nb;

    nb = n;
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        nb *= -1;
    }
    if (nb < 10)
        ft_putchar_fd(nb + '0', fd);
    else
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
}


int main()
{
  int a = -1555;
  ft_putnbr_fd(a, 1);  
}