#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "prototipos.h"

#define MAX_PLAYERS 10 // Maximo de players
#define MAX_STR 20     // Maximo de caracteres por espaco na lista

// Codigo Principal
int main(){
    // Limpa a tela
    system("clear");

    // Insert de funcoes do sistema
    int insert = 1, rep;
    char button;

    // Total de personagens
    int total_personagens = 0;

    // Listas
    int ids_identificadores[MAX_PLAYERS];
    int ids_enderecos[MAX_PLAYERS];
    char nomes[MAX_PLAYERS][MAX_STR];
    int levels[MAX_PLAYERS];
    char classes[MAX_PLAYERS][MAX_STR];
    char generos[MAX_PLAYERS];
    char racas[MAX_PLAYERS][MAX_STR];

    // Parametros para as funcoes
    char nome[MAX_STR], classe[MAX_STR], genero, raca[MAX_STR];
    int id_identificador, level;

    
    while (insert != 0){
        system("clear");
        layout_completo();
        printf("Digite: ");
        scanf(" %d", &insert);

        switch (insert){

        // Caso criar()
        case 1:
            printf("Quantos personagens deseja criar?: ");
            scanf("%d", &rep);

            while(rep > 0){
                system("clear");
                layout_parcial();
                printf("Nome............: ");
                scanf("%s", &nome);

                printf("Level...........: ");
                scanf("%d", &level);

                printf("Classe..........: ");
                scanf("%s", &classe);

                printf("Genero..........: ");
                scanf(" %c", &genero); // Nao remover o espaco antes do "%c"

                printf("Raca............: ");
                scanf("%s", &raca);
                printf("\n");

                // Executa criar()
                criar(nome, level, classe, genero, raca, 
                      ids_identificadores, ids_enderecos,
                      nomes, levels, classes, generos, racas, &total_personagens);
                
                rep--;
                }
            break;
        
        // Caso listar()
        case 2:
            system("clear");
            layout_parcial();

            listar(ids_identificadores, ids_enderecos,
                   nomes, levels, classes, generos, racas, &total_personagens);
            
            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            break;
        
        // Caso editar()
        case 3:
            printf("Insira o Id Identificador do personagem: ");
            scanf("%d", &id_identificador);
            system("clear");
            layout_parcial();

            editar(id_identificador, ids_identificadores, ids_enderecos,
                   nomes, levels, classes, generos, racas, &total_personagens);
            
            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            break;

        // Caso remover()
        case 4:
            printf("\n");
            listar(ids_identificadores, ids_enderecos,
                   nomes, levels, classes, generos, racas, &total_personagens);

            printf("Insira o Id Identificador do personagem: ");
            scanf("%d", &id_identificador);

            remover(id_identificador, ids_identificadores, ids_enderecos,
                   nomes, levels, classes, generos, racas, &total_personagens);
            
            system("clear");
            layout_parcial;

            printf("Removido com sucesso.\n");
            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            break;
            
        // Caso id_personagem()
        case 5:
            printf("Insira o Id Identificador do personagem: ");
            scanf("%d", &id_identificador);
            printf("\n\n");

            id_personagem(id_identificador,
                          ids_identificadores, ids_enderecos,
                          nomes, levels, classes, generos, racas, &total_personagens);
            
            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            break;
            
        // Caso maior()
        case 6:
            maior(ids_identificadores, ids_enderecos,
                  nomes, levels, classes, generos, racas, &total_personagens);

            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            break;

        // Caso menor()
        case 7:
            menor(ids_identificadores, ids_enderecos,
                  nomes, levels, classes, generos, racas, &total_personagens);

            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            break;

        // Caso media()
        case 8:
            media(ids_identificadores, ids_enderecos,
                  nomes, levels, classes, generos, racas, &total_personagens);

            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            break;
        default:
            break;
        }
    }
    

}
