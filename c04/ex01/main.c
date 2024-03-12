void	ft_putstr(char	*str);

int	main(void)
{
	char str[] = "09172430@!#(!@&#@!&#)*!@)#*";
	char *str_ptr = &str[0];

	ft_putstr(str_ptr);

	return 0;
}
