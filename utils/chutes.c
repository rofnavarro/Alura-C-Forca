#include "../forca.h"

void	chuta()
{
	char	chute;

	ft_printf("Qual letra? ");
	scanf(" %c", &chute);
	if (letra_existe(chute))
		ft_printf("Você acertou: a palavra tem a letra %c\n\n", chute);
	else
		ft_printf("\nVocê errou: a palavra NÃO tem a letra %c\n\n", chute);
	chutes[chutes_dados] = chute;
	chutes_dados++;
}

int	chutes_errados()
{
	int	erros;
	int	i;

	i = 0;
	erros = 0;
	while (i < chutes_dados)
	{
		if (!letra_existe(chutes[i]))
			erros++;
		i++;
	}
	return (erros);
}

int	ja_chutou(char letra)
{
	int	achou;
	int	i;

	achou = 0;
	i = 0;
	while (i < chutes_dados)
	{
		if (chutes[i] == letra)
		{
			achou = 1;
			break;
		}
		i++;
	}
	return (achou);
}
