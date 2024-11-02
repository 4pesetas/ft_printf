int ft_putnbr(int nb)
{
    int count;

    count = 0;
    if (nb < 0)
    {
        count += ft_putchar("-");
        if (nb == -2147483648)
        {
            write(1, "2147483648", 10);
            return 11;
        }
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        count++;
    }
    ft_putchar(nb % 10 + 48);
    count++;
    return (count);
}