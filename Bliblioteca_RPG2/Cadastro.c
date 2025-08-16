#include <stdio.h>
#include "Cadaluno.h"
#include <stdlib.h>

int main(){

    int personagens;
    printf("Qual é a quantidade personagens que iram patircipar dessa aventura: ");
    scanf("%i", &personagens);

    int id_identificador[personagens];
    char nome[personagens][MAX_STR];
    int level[personagens];
    char genero[personagens][MAX_STR];
    char raca[personagens][MAX_STR];
    char classe[personagens][MAX_STR];

     int fun = 1;
    while (fun != 0){
        system("clear");
        layout_completo();
        printf("Digite: ");
        scanf(" %d", &fun);

        if(fun == 1){
            system("clear");
            layout_parcial();
            criar(personagens, id_identificador, nome, classe, level, raca, genero);
            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            printf("\n");
        }

        else if(fun == 2){
            int posicao;
            printf("Qual a posição do personagem: ");
            scanf("%i", &posicao);
            system("clear");
            layout_parcial_edicao();
            deletar(posicao, id_identificador, nome, classe, level, raca, genero);
            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            printf("\n");
        }

        else if(fun == 3){
            system("clear");
            layout_parcial_listar();
            listar(personagens, id_identificador, nome, classe, level, raca, genero);
            printf("\nPressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            printf("\n");
        }

        else if(fun == 4){
            int posicao;
            printf("Qual a posição do personagem: ");
            scanf("%i", &posicao);
            system("clear");
            layout_parcial_edicao();
            atualizar(posicao, id_identificador, nome, classe, level, raca, genero);
            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            printf("\n");
        }

        else if(fun == 5){
            int posicao;
            printf("Qual a posição do personagem: ");
            scanf("%i", &posicao);
            system("clear");
            listar_id(posicao, id_identificador, nome, classe, level, raca, genero);
            printf("\nPressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            printf("\n");
        }

        else if(fun == 6){
            system("clear");
            int valor;
            layout_level();
            printf("Digite: ");
            scanf("%i", &valor);
            if(valor == 3){
                system("clear");
                media(level, personagens);
                 printf("Pressione ENTER para retornar ao menu principal: ");
                // Necessario para o ENTER funcionar
                getchar();
                getchar();
                printf("\n");
            }
            else if(valor == 1){
                system("clear");
                maior(level,nome,personagens);
                 printf("Pressione ENTER para retornar ao menu principal: ");
                // Necessario para o ENTER funcionar
                getchar();
                getchar();
                printf("\n");
            }
            else if(valor == 2){
                system("clear");
                menor(level,nome,personagens);
                 printf("Pressione ENTER para retornar ao menu principal: ");
                // Necessario para o ENTER funcionar
                getchar();
                getchar();
                printf("\n");
            }
            else{
                system("clear");
                printf("Valor Invalido");
                printf("Pressione ENTER para retornar ao menu principal: ");
                // Necessario para o ENTER funcionar
                getchar();
                getchar();
                printf("\n");
            }
        }

        else{
            system("clear");
            printf("Valor Invalido.\n");
            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            printf("\n");
        }

    }
}

