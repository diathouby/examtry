char	putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	k;
	k = 0;

	(void)argc;
	while ( k < argc)
	{
		putstr(argv[k]);
		k++;
	}
}
