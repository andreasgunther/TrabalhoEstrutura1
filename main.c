#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYERS 10
#define MAX_STR 20 

// Prototipos
void criar(char *nome, unsigned int level, char *classe, char genero, char *raca,
           char nomes[][MAX_STR]);

// Codigo Principal
int main(){
    
    int id_Identificador[MAX_PLAYERS];
    char nomes[MAX_PLAYERS][MAX_STR];
    int levels[MAX_PLAYERS];
    char classes[MAX_PLAYERS][MAX_STR];
    char generos[MAX_PLAYERS];
    char racas[MAX_PLAYERS][MAX_STR];

    criar("Kust", 50, "Paladino", 'M', "Vampiro", nomes);

    printf("%s\n", nomes[0]);
    printf("%d\n", levels[0]);
    printf("%s\n", classes[0]);
    //printf("%c\n", generos[0]);
    //printf("%s\n", racas[0]);


}

// Definicoes

// Cria o personagem (nome, level, classe, genero, raca)
void criar(char *nome, unsigned int level, char *classe, char genero, char *raca,
           char nomes[][MAX_STR]){

    // Gera o id_Identificador
    int idd = 0;

    // Põe o nome na lista "nomes"
    strcpy(nomes[], nome);
}


