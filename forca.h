#ifndef FORCA_H
# define FORCA_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include "./ft_printf/ft_printf.h"

# define TAMANHO_PALAVRA 20

extern char		palavra_secreta[TAMANHO_PALAVRA];
extern char		chutes[26];
extern int		chutes_dados;

//	chutes.c
void	chuta();
int		chutes_errados();
int		ja_chutou(char letra);

//	desenha.c
void	desenha_abertura();
void	desenha_forca();
void	desenha_vitoria();
void	desenha_derrota();

//	fim.c
int		ganhou();
int		enforcou();

//	palavra.c
void	escolhe_palavra();
int		letra_existe(char letra);
void	adiciona_palavra();

#endif