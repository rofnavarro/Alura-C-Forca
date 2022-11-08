#include "../forca.h"

void	desenha_abertura()
{
	ft_printf("***************************\n");
	ft_printf("***    Jogo da Forca    ***\n");
	ft_printf("***************************\n\n");
}

void	desenha_forca()
{
	int	erros;
	int	i;

	i = 0;
	erros = chutes_errados();
	ft_printf("  ______        \n");
	ft_printf(" |/     |       \n");
	ft_printf(" |     %c%c%c   \n", (erros >= 1 ? '(' : ' '), (erros >= 1 ? '_' : ' '), (erros >= 1 ? ')' : ' '));
	ft_printf(" |     %c%c%c   \n", (erros >= 3 ? '\\' : ' '), (erros >= 2 ? '|' : ' '), (erros >= 3 ? '/' : ' '));
	ft_printf(" |      %c      \n", (erros >= 2 ? '|' : ' '));
	ft_printf(" |     %c %c    \n", (erros >= 4 ? '/' : ' '), (erros >= 4 ? '\\' : ' '));
	ft_printf(" |              \n");
	ft_printf("_|____          \n");
	ft_printf("\n\n");
	while (i < ft_strlen(palavra_secreta))
	{
		if (ja_chutou(palavra_secreta[i]))
			ft_printf("%c ", palavra_secreta[i]);
		else
			ft_printf("_ ");
		i++;
	}
	ft_printf("\n");
}

void	desenha_vitoria()
{
	ft_printf("\nParabéns, você ganhou!\n\n");
	ft_printf("       ___________      \n");
	ft_printf("      '._==_==_=_.'     \n");
    ft_printf("      .-\\:      /-.    \n");
    ft_printf("     | (|:.     |) |    \n");
    ft_printf("      '-|:.     |-'     \n");
    ft_printf("        \\::.    /      \n");
    ft_printf("         '::. .'        \n");
    ft_printf("           ) (          \n");
    ft_printf("         _.' '._        \n");
    ft_printf("        '-------'       \n\n");
}

void	desenha_derrota()
{
	ft_printf("\nPuxa, você foi enforcado!\n");
    ft_printf("A palavra era **%s**\n\n", palavra_secreta);
    ft_printf("    _______________         \n");
    ft_printf("   /               \\       \n");
    ft_printf("  /                 \\      \n");
    ft_printf("//                   \\/\\  \n");
    ft_printf("\\|   XXXX     XXXX   | /   \n");
    ft_printf(" |   XXXX     XXXX   |/     \n");
    ft_printf(" |   XXX       XXX   |      \n");
    ft_printf(" |                   |      \n");
    ft_printf(" \\__      XXX      __/     \n");
    ft_printf("   |\\     XXX     /|       \n");
    ft_printf("   | |           | |        \n");
    ft_printf("   | I I I I I I I |        \n");
    ft_printf("   |  I I I I I I  |        \n");
    ft_printf("   \\_             _/       \n");
    ft_printf("     \\_         _/         \n");
    ft_printf("       \\_______/           \n");
}
