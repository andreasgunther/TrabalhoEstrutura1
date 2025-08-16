#include <stdio.h>
#include "Cadaluno.h"

// Layout completo
void layout_completo(){
    printf("=========================================\n");
    printf("=            MENU DE PESONAGEMS         =\n");
    printf("=========================================\n");
    printf("[1] Criar personagem                    =\n");
    printf("[2] Deletar personagem                  =\n");
    printf("[3] Listar pesonagens                   =\n");
    printf("[4] Atualizar pesonagem                 =\n");
    printf("[5] Exibir personagem                   =\n");
    printf("[6] Status personagens                  =\n");
    printf("[0] Encerrar sessao                     =\n");
    printf("=========================================\n");
}

void layout_level(){
    printf("=========================================\n");
    printf("=        CRIADOR DE PERSONAGENS         =\n");
    printf("=========================================\n");
    printf("[1] Obter maior level                   =\n");
    printf("[2] Obter menor level                   =\n");
    printf("[3] Obter media dos leveis              =\n");
    printf("=========================================\n");
}

// Layout parcial
void layout_parcial(){
    printf("=========================================\n");
    printf("=        CRIADO DE PERSONAGENS         =\n");
    printf("=========================================\n");
}

void layout_parcial_edicao(){
    printf("=========================================\n");
    printf("=         EDIÇÃO DE PERSONAGENS         =\n");
    printf("=========================================\n");
}

void layout_parcial_listar(){
    printf("=========================================\n");
    printf("=          LISTA DE PERSONAGENS         =\n");
    printf("=========================================\n");
}

void criar(int personagens, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]) {


    int valor = personagens;
    int n = 1;
    for(int i = 0; i < valor; i++){
        printf("\n");
        printf("             PERSONAGEM  %i            \n", n);
        printf("\n");
        printf("Nome do personagem: ");
        scanf("%s", nomes[i]);
        printf("\nQual id identificador do personagem: ");
        scanf("%i", &id_identificador[i]);
        printf("\nQual a classe do personagem: ");
        scanf("%s", classe[i]);
        printf("\nQual o level do personagem: ");
        scanf("%i", &level[i]);
        printf("\nQual a raça do personagem: ");
        scanf("%s", raca[i]);
        printf("\nQual o gênero do personagem: ");
        scanf("%s", genero[i]);
        printf("\n");
        n++;
        printf("--------------------------------------\n");
    }
    
}

void listar(int personagens, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]){
    int valor = personagens;
    for(int i = 0; i < valor; i++){
        int *id = &id_identificador[i];
        if(id_identificador[i] != 0){
            printf("\n");
            printf("Nome do personagem: %s\n", nomes[i]);
            printf("Qual id identificador do personagem: %i\n", id_identificador[i]);
            printf("Qual a classe do personagem: %s\n", classe[i]);
            printf("Qual o level do personagem: %i\n", level[i]);
            printf("Qual a raça do personagem: %s\n", raca[i]);
            printf("Qual o gênero do personagem: %s\n", genero[i]);
            printf("id do personagem: %p", (void *)id);
            printf("\n");
        }
    }   
}

void atualizar(int vbn,int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]){

    int valor = vbn - 1;
    printf("\n---------Dados Antigos---------\n");

    printf("\nNome do personagem:-------------- %s\n",nomes[valor]);
    printf("Identificador do personagem:----- %i\n", &id_identificador[valor]);
    printf("Classe do personagem:------------ %s\n", classe[valor]);
    printf("Level do personagem:------------- %i\n", &level[valor]);
    printf("Raça do personagem:-------------- %s\n", raca[valor]);
    printf("Gênero do personagem:------------ %s\n", genero[valor]);

    printf("\n----------Dados Novos----------\n");

    printf("\nNome do personagem: ");
    scanf("%s", nomes[valor]);
    printf("Qual id identificador do personagem: ");
    scanf("%i", &id_identificador[valor]);
    printf("Qual a classe do personagem: ");
    scanf("%s", classe[valor]);
    printf("Qual o level do personagem: ");
    scanf("%i", &level[valor]);
    printf("Qual a raça do personagem: ");
    scanf("%s", raca[valor]);
    printf("Qual o gênero do personagem: ");
    scanf("%s", genero[valor]);
    printf("\n");
}

void deletar(int vbn,int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]){
    printf("\n");
    int valor = vbn - 1;
    for(int i = 0; i <= valor; i++){
        nomes[i][0] = '\0';          // string vazia
        id_identificador[i] = 0;     // zera o ID
        classe[i][0] = '\0';      // string vazia
        level[i] = 0;                // zera o level
        raca[i][0] = '\0';           // string vazia
        genero[i][0] = '\0';         // string vazia
        printf("Personagem Deletado.\n");
        printf("\n");
    }
}

void listar_id(int vbn, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]){
    vbn = vbn - 1;
    int *id = &id_identificador[vbn];
        if(id_identificador[vbn] != 0){
            printf("=========================================\n");
            printf("       LISTA DE PERSONAGEM %s            \n",nomes[vbn] );
            printf("=========================================\n");
            printf("\n");
            printf("Nome do personagem: %s\n", nomes[vbn]);
            printf("Qual id identificador do personagem: %i\n", id_identificador[vbn]);
            printf("Qual a classe do personagem: %s\n", classe[vbn]);
            printf("Qual o level do personagem: %i\n", level[vbn]);
            printf("Qual a raça do personagem: %s\n", raca[vbn]);
            printf("id do personagem:: %p \n", (void *)id);
        }
}

void maior(int level[], char nomes[][MAX_STR], int personagens){
    int maior = 0;
    int pos = 0;
    for(int i = 0; i < personagens; i++){
        if(level[i] > maior){
            maior = level[i];
            pos = i;
        }
    }
    printf("A maior level é %i do personagem %s .\n",maior,nomes[pos]);
    printf("\n");
}

void menor(int level[], char nomes[][MAX_STR], int personagens){
    int menor = 0;
    int pos = 0;
    menor = level[0];
    for(int i = 0; i < personagens; i++){
        if(level[i] < menor){
            menor = level[i];
            pos = i;
        }
    }
    printf("A menor level é %i do personagem %s .\n",menor,nomes[pos]);
    printf("\n");
}


void media(int level[], int personagens){
    float media = 0;
    for(int i = 0; i < personagens; i++){
        media += level[i];
    }
    media = media/personagens;
    printf("A media dos personagens foi %.2f .\n", media);
    printf("\n");

}



