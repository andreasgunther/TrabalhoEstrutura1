#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYERS 10
#define MAX_STR 20

// Prototypes
void criar(char *nome, unsigned int level, char *classe, char genero, char *raca,
           char nomes[][MAX_STR], int levels[], char classes[][MAX_STR],
           char generos[], char racas[][MAX_STR], int *total_Personagens);

int main() {
    int id_Identificador[MAX_PLAYERS];
    char nomes[MAX_PLAYERS][MAX_STR];
    int levels[MAX_PLAYERS];
    char classes[MAX_PLAYERS][MAX_STR];
    char generos[MAX_PLAYERS];
    char racas[MAX_PLAYERS][MAX_STR];
    int total_Personagens = 0;

    criar("Kust", 50, "Paladino", 'M', "Vampiro",
          nomes, levels, classes, generos, racas, &total_Personagens);

    printf("%s\n", nomes[0]);
    printf("%d\n", levels[0]);
    printf("%s\n", classes[0]);
    printf("%c\n", generos[0]);
    printf("%s\n", racas[0]);

    return 0;
}

// Cria o personagem
void criar(char *nome, unsigned int level, char *classe, char genero, char *raca,
           char nomes[][MAX_STR], int levels[], char classes[][MAX_STR],
           char generos[], char racas[][MAX_STR], int *total_Personagens) {
    
    int idd = *total_Personagens; // ID do novo jogador

    strcpy(nomes[idd], nome);
    levels[idd] = level;
    strcpy(classes[idd], classe);
    generos[idd] = genero;
    strcpy(racas[idd], raca);

    (*total_Personagens)++; // incrementa quantidade de personagens
}
