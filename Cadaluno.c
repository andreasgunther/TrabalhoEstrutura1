#include <stdio.h>
#include "Cadaluno.h"

void criar(int personagens, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]) {

    int valor = personagens;
    for(int i = 0; i < valor; i++){
          if(i == 0){
            printf("\n");
        }
        printf("Nome do personagem: ");
        scanf("%s", nomes[i]);
        printf("Qual id identificador do personagem: ");
        scanf("%i", &id_identificador[i]);
        printf("Qual a classe do personagem: ");
        scanf("%s", classe[i]);
        printf("Qual o level do personagem: ");
        scanf("%i", &level[i]);
        printf("Qual a raça do personagem: ");
        scanf("%s", raca[i]);
        printf("Qual o gênero do personagem: ");
        scanf("%s", genero[i]);
        printf("\n");
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
    for(int i = 0; i <= valor; i++){
        printf("\n");
        printf("Nome do personagem: ");
        scanf("%s", nomes[i]);
        printf("Qual id identificador do personagem: ");
        scanf("%i", &id_identificador[i]);
        printf("Qual a classe do personagem: ");
        scanf("%s", classe[i]);
        printf("Qual o level do personagem: ");
        scanf("%i", &level[i]);
        printf("Qual a raça do personagem: ");
        scanf("%s", raca[i]);
        printf("Qual o gênero do personagem: ");
        scanf("%s", genero[i]);
        printf("\n");
    }
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
    }
}

void listar_id(int vbn, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]){
    vbn = vbn - 1;
    int *id = &id_identificador[vbn];
        if(id_identificador[vbn] != 0){
            printf("\n");
            printf("Nome do personagem: %s\n", nomes[vbn]);
            printf("Qual id identificador do personagem: %i\n", id_identificador[vbn]);
            printf("Qual a classe do personagem: %s\n", classe[vbn]);
            printf("Qual o level do personagem: %i\n", level[vbn]);
            printf("Qual a raça do personagem: %s\n", raca[vbn]);
            printf("id do personagem:: %p", (void *)id);
            printf("\n");
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
    printf("A maior level é %i do personagem com nome %s .\n",maior,nomes[pos]);
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
    printf("A menor level é %i do personagem com nome %s .\n",menor,nomes[pos]);
}


void media(int level[], int personagens){
    float media = 0;
    for(int i = 0; i < personagens; i++){
        media += level[i];
    }
    media = media/personagens;
    printf("A media dos personagens foi %.2f .\n", media);
}



