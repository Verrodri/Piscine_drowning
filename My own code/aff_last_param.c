int	main(int nbdeag, char **argv)
{
	int i;

	if ( nbdeag > 1)
	{
		i = 0;
		while (argv[nbdeag - 1][i])
		{
			write(1, &argv[nbdeag - 1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}