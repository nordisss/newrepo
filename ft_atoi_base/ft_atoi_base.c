int ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int simb = 1;
	int var = 0;
	
	if(str[i] == '-')
	{
		simb = -1;
		i++;
	}
	while(str[i] != '\0')
	{
		var *= str_base;
		if(str[i] >= '0' && str[i] <= '9')
			var += str[i] - '0';
		else if(str[i] >= 'A' && str[i] <= 'Z')
			var += str[i] - '7';
		else if(str[i] >= 'a' && str[i] <= 'z')
			var += str[i] - 'W';
		i++;
	}
	return(var * simb);
}

























/* int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - '0';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - '7';
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 'W';
		i++;
	}
	return (result * sign);
}
*/
