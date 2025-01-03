#include <unistd.h>

int	main (int ac, char **av)
{
	char	*str = &av[1][0];
	if (ac != 2)
		return (write(1,"\n",1), 0);
	int i = 0;
	int j;
	while (str[i])
	{
		j = 1;
		if (str[i] >= 'a' && str[i] <= 'z')
			j += str[i] - 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			j += str[i] - 'A';
		while (j > 0)
		{
			write(1,&str[i],1);
			j--;
		}
		i++;
	}
	write(1,"\n",1);
	return 0;
}