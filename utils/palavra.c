#include "../forca.h"

void	escolhe_palavra()
{
	FILE	*f;
	int		i;
	int		palavra_aleatoria;
	int		quantidade_palavras;

	i = 0;
	f = fopen("./utils/base.txt", "r");
	if (f == 0)
	{
		ft_printf("Erro na leitura do banco de dados de palavras.\n\n");
		exit(EXIT_FAILURE);
	}
	fscanf(f, "%d", &quantidade_palavras);
	srand(time(0));
	palavra_aleatoria = rand() % quantidade_palavras;
	while (i <= palavra_aleatoria)
	{
		fscanf(f, "%s", palavra_secreta);
		i++;
	}
	fclose(f);
}

int	letra_existe(char letra)
{
	int	i;

	i = 0;
	while (i < ft_strlen(palavra_secreta))
	{
		if (letra == palavra_secreta[i])
			return (1);
		i++;
	}
	return (0);
}

void	adiciona_palavra()
{
	FILE	*f;
	char 	quer;
	int		quantidade;

	ft_printf("Você deseja adicionar uma nova palavra no jogo (S/N)? ");
	scanf(" %c", &quer);
	if (quer == 'S')
	{
		char nova_palavra[TAMANHO_PALAVRA];

		ft_printf("Digite a nova palavra, em letras maiúsculas: ");
		scanf("%s", nova_palavra);
		f = fopen("./utils/base.txt", "r+");
		if (f == 0)
		{
			ft_printf("Erro na leitura do banco de dados de palavras.\n\n");
			exit(EXIT_FAILURE);
		}
		fscanf(f, "%d", &quantidade);
		quantidade++;
		fseek(f, 0, SEEK_SET);
		fprintf(f, "%d", quantidade);
		fseek(f, 0, SEEK_END);
		fprintf(f, "\n%s", nova_palavra);
		fclose(f);
	}
}
