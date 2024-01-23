#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i = 0;
	
	while (str[i] != '\0')
		i++;
	return (i);
}

void	last_word(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t'))
		i--;
	i++;
	while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t'))
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	last_word(argv[1]);
	return (0);
}
