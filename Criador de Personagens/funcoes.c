#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "prototipos.h"

#define MAX_PLAYERS 10 // Maximo de players
#define MAX_STR 20     // Maximo de caracteres por espaco na lista

// Definicoes

// Layout completo
void layout_completo(){
    printf("=========================================\n");
    printf("=        CRIADOR DE PERSONAGENS         =\n");
    printf("=========================================\n");
    printf("[1] Criar personagem                    =\n");
    printf("[2] Listar todos os personagens         =\n");
    printf("[3] Editar personagem                   =\n");
    printf("[4] Remover personagem                  =\n");
    printf("[5] Exibir personagem                   =\n");
    printf("[6] Obter maior level                   =\n");
    printf("[7] Obter menor level                   =\n");
    printf("[8] Obter media de levels               =\n");
    printf("[0] Encerrar sessao                     =\n");
    printf("=========================================\n");
}

// Layout parcial
void layout_parcial(){
    printf("=========================================\n");
    printf("=        CRIADOR DE PERSONAGENS         =\n");
    printf("=========================================\n");
}

// Cria o personagem (nome, level, classe, genero, raca)
void criar(char *nome, int level, char *classe, char genero, char *raca,
           int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
           char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens){

    // Gera o idd local
    *total_personagens += 1;
    int idd = *total_personagens - 1;

    // Põe "idd" na lista "ids_identificadores"
    ids_identificadores[idd] = idd + 1;

    // Põe o endereco de "idd" na lista "ids_enderecos"
    ids_enderecos[idd] = &ids_identificadores[idd];

    // Põe "nome" na lista "nomes"
    strcpy(nomes[idd], nome);
    
    // Põe "level" na lista "levels"
    levels[idd] = level;

    // Põe "classe" na lista "classes"
    strcpy(classes[idd], classe);

    // Põe "genero" na lista "generos"
    generos[idd] = genero;

    // Põe "raca" na lista "racas"
    strcpy(racas[idd], raca);
}

// Lista todos os personagens criados
void listar(int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
            char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens){

    // Verifica se ha um personagem criado no endereco
    // Se sim, imprime
    // Se nao, pula para o proximo endereco    
    for (int c = 0; c < *total_personagens; c++){
        if (ids_identificadores[c] > 0){
            printf("Id Identificador: %d\n", ids_identificadores[c]);
            printf("Id Endereco.....: %p\n", ids_enderecos[c]);
            printf("Nome............: %s\n", nomes[c]);
            printf("Level...........: %d\n", levels[c]);
            printf("Classe..........: %s\n", classes[c]);
            printf("Genero..........: %c\n", generos[c]);
            printf("Raca............: %s\n", racas[c]);
            printf("\n");
        }
    }
}

// Edita os dados do personagem 
// Acessa por meio do id_identificador
void editar(int id_identificador,
            int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
            char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens){
    
    // Armazena o id_identificador
    // Subtrai 1 para o idd funcionar como index nas listas
    int idd = id_identificador - 1;

    // Printa os dados antigos
    printf("Dados originais:\n");
    printf("\n");

    printf("Id Identificador: %d\n", ids_identificadores[idd]);
    printf("Id Endereco.....: %p\n", ids_enderecos[idd]);
    printf("Nome............: %s\n", nomes[idd]);
    printf("Level...........: %d\n", levels[idd]);
    printf("Classe..........: %s\n", classes[idd]);
    printf("Genero..........: %c\n", generos[idd]);
    printf("Raca............: %s\n", racas[idd]);
    printf("\n");
    
    // Solicita a entrada dos novos dados
    printf("Dados atuais:\n");
    printf("\n");

    printf("Nome............: ");
    scanf("%s", &nomes[idd]);

    printf("Level...........: ");
    scanf("%d", &levels[idd]);

    printf("Classe..........: ");
    scanf("%s", &classes[idd]);

    printf("Genero..........: ");
    scanf(" %c", &generos[idd]); // Nao remover o espaco antes do "%c"

    printf("Raca............: ");
    scanf("%s", &racas[idd]);
    printf("\n");

}

// Remove personagens por meio do id_identificador
void remover(int id_identificador,
            int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
            char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens){

    // Variavel local para armazenar o id_identificador
    int idd = id_identificador;

    // ids_identificadores[idd] recebe 0
    // A funcao listar() nao lista personagens com id_identificador == 0
    idd--;
    ids_identificadores[idd] = 0;
}

// Lista o personagem a partir do id_identificador
void id_personagem(int id_identificador,
                   int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
                   char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens){

    // Variavel local para armazenar o id_identificador
    int idd = id_identificador;

    // Altera o id_identificador para servir de index
    idd--;
    
    // Exibe os dados do personagem
    printf("Id Identificador: %d\n", ids_identificadores[idd]);
    printf("Id Endereco.....: %p\n", ids_enderecos[idd]);
    printf("Nome............: %s\n", nomes[idd]);
    printf("Level...........: %d\n", levels[idd]);
    printf("Classe..........: %s\n", classes[idd]);
    printf("Genero..........: %c\n", generos[idd]);
    printf("Raca............: %s\n", racas[idd]);
    printf("\n");
    
}

// Retorna o maior level
void maior(int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
          char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens){

    // Variavel local para armazenar o maior level
    int higher_level;
    // Variavel local para armazenar o nome do personagem com maior level
    char higher_name[MAX_STR];
    // Variavel local para verificar a primeira rodada
    int t = 0;

    // Loop para reunir os levels e encontrar o maior
    for (int c = 0; c < *total_personagens; c++){
        if (ids_identificadores[c] > 0){
            if (t == 0){
                higher_level = levels[c];
                strcpy(&higher_name, nomes[c]);
                t = 1;
            } else {
                if (higher_level < levels[c]){
                    higher_level = levels[c];
                    strcpy(&higher_name, nomes[c]);
                }
            }
        }
    }

    // Printa o resultado
    printf("%s possui o maior level: %d\n", higher_name, higher_level);
}


// Retorna o menor level
void menor(int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
           char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens){

    // Variavel local para armazenar o menor level
    int lower_level;
    // Variavel local para armazenar o nome do personagem com menor level
    char lower_name[MAX_STR];
    // Variavel local para verificar a primeira rodada
    int t = 0;

    // Loop para reunir os levels e encontrar o maior
    for (int c = 0; c < *total_personagens; c++){
        if (ids_identificadores[c] > 0){
            if (t == 0){
                lower_level = levels[c];
                strcpy(&lower_name, nomes[c]);
                t = 1;
            } else {
                if (lower_level > levels[c]){
                    lower_level = levels[c];
                    strcpy(&lower_name, nomes[c]);
                }
            }
        }
    }

    // Printa o resultado
    printf("%s possui o menor level: %d\n", lower_name, lower_level);
}

// Retorna a media de todos os levels
void media(int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
           char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens){

    // Variavel local para somar os levels
    int sum = 0;
    // Variavel local para somar a quantidade de levels
    int qtd = 0;
    // Variavel local que guarda a media
    int average;

    // Loop para retornar a media dos levels
    for (int c = 0; c < *total_personagens; c++){
        if (ids_identificadores[c] > 0){
            sum += levels[c];
            qtd++;
        }
    }

    average = sum / qtd;

    // Printa o resultado
    printf("Media entre os levels: %d", average);
    printf("\n");
}

