#include "../forca.h"

int	ganhou()
{
	int	i;

	i = 0;
	while (i < ft_strlen(palavra_secreta))
	{
		if (!ja_chutou(palavra_secreta[i]))
			return (0);
		i++;
	}
	return (1);
}

int	enforcou()
{
	return (chutes_errados() >= 5);
}
