#include <stdio.h>
#include "Cadaluno.h"
#include <stdlib.h>

int main(){

    int personagens;
    printf("Qual é a quatlevel de personagens: ");
    scanf("%i", &personagens);

    int id_identificador[personagens];
    char nome[personagens][MAX_STR];
    int level[personagens];
    char genero[personagens][MAX_STR];
    char raca[personagens][MAX_STR];
    char classe[personagens][MAX_STR];
    int id[personagens];

    int saida = 1;
    while (saida == 1){

        int fun;
        printf("\n[1] Cadastro\n[2] Deletar\n[3] Listar\n[4] Atualizar \n[5] Procurar Personagem\n[6] Level \n");
        printf("Qual função você quer usar: ");
        scanf("%i", &fun);

        if(fun == 1){
            criar(personagens, id_identificador, nome[][MAX_STR], classe[][MAX_STR], level, raca[][MAX_STR], genero[][MAX_STR]);
        }
        else if(fun == 2){
            int posicao;
            printf("Qual a posição do personagem: ");
            scanf("%i", &posicao);
            deletar(posicao, id_identificador, nome, classe, level, id, raca, genero);
        }
        else if(fun == 3){
            listar(personagens, id_identificador, nome, classe, level, id, raca, genero);
        }
        else if(fun == 4){
            int posicao;
            printf("Qual a posição do personagem: ");
            scanf("%i", &posicao);
            atualizar(posicao, id_identificador, nome, classe, level, id, raca, genero);
        }
        else if(fun == 5){
            int posicao;
            printf("Qual a posição do personagem: ");
            scanf("%i", &posicao);
            listar_id(posicao, id_identificador, nome, classe, level, id, raca, genero);
        }
        else if(fun == 6){
            int valor;
            printf("\n[1] Media de level dos personagens \n[2] Maior level \n[3] Menor level \n");
            printf("Qual função você quer usar: \n");
            scanf("%i", &valor);
            if(valor == 1){
                media(id, personagens);
            }
            else if(valor == 2){
                maior(id,nome,personagens);
            }
            else if(valor == 3){
                menor(id,nome,personagens);
            }
            else{
                printf("Valor Invalido");
            }
        }
        else{
            printf("Numero Invalido.\n");
        }

        printf("\n[1] = Sim\n[2] = Não\n");
        printf("Que continuar utilizando o programa: ");
        scanf("%i", &saida);
        system("clear");
    }
}

