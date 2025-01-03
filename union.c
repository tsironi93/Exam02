#include <unistd.h>

int didCharAppeared (int len, char *str, char a)
{
	int i = 0;
	while (len)
	{
		if (str[i] == a)
			return 0;
		i++;
		len--;
	}
	return 1;
}

int  main (int ac, char **av)
{
	if (ac != 3)
		return(write(1,"\n",1), 0);
	int i = 1;
	int j = 0;
	char *str1 = &av[1][0];
	char *str2 = &av[2][0];
	write(1,&str1[j],1);
	while (str1[i])
	{
		if (didCharAppeared(i, str1, str1[i]))
			write(1,&str1[i],1);
		i++;
	}
	while (str2[j])
	{
		if (didCharAppeared(i, str1, str2[j]) == 1 && didCharAppeared(j, str2, str2[j]))
			write (1,&str2[j],1);
		j++;
	}
	write(1,"\n",1);
}