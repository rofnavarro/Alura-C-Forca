#include "forca.h"

char	palavra_secreta[TAMANHO_PALAVRA];
char	chutes[26];
int		chutes_dados = 0;

int	main()
{
	desenha_abertura();
	escolhe_palavra();
	do
	{
		desenha_forca();
		chuta();
	}	while (!ganhou() && !enforcou());
	if (ganhou())
		desenha_vitoria();
	else
		desenha_derrota();
	adiciona_palavra();
}
