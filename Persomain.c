#include <stdio.h> //biblioteca padrão
#include "Prototipos.h" //inclui o arquivo que esta nossos protótipos
#include <stdlib.h> //biblioteca que contém funções do sistema, como o clear para limpar o terminal

int main(){ //função main(principal) do nosso sistema

    int personagens;
    int qrt = 0;
    
    qtd_jogadores(&personagens, &qrt); //define o valor das variáveis, passando seus endereços para a função
        
    //criação dos arrays para guardar os dados de cada personagem
    int id_identificador[personagens]; //guarda o id_identificador(posição) de cada personagem
    char nome[personagens][MAX_STR]; //guarda o nome de cada personagem
    int level[personagens]; //guarda o level de cada personagem
    char genero[personagens][MAX_STR]; //guarda o gênero de cada personagem
    char raca[personagens][MAX_STR]; //guarda a raça de cada personagem
    char classe[personagens][MAX_STR]; //guarda a classe de cada personagem

    int fun = 1; //variável fun para o controle do while
    while (fun != 0){ //enquanto for diferente do 0 ele vai fazendo o loop
        system("clear"); //limpa a tela do terminal
        layout_completo(); //mostra o menu principal na tela
        printf("Digite: ");
        scanf(" %d", &fun); //usuário ecolhe uma opção do menu

        if(fun == 1){ //se for 1 ele entra no menu para criar o personagem
            system("clear"); //limpa a tela do terminal
            layout_parcial(); //mostra o layout parcial do menu(criador de personagens)
            criar(personagens, id_identificador, nome, classe, level, raca, genero); //chama a função para a criação do personagem
            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar(); //descarta o enter anterior que o usuário digitou para criar seu personagem, sem isso o código trava, pois esse enter fica preso
            getchar(); //espera o usuário apertar o enter para prosseguir
            printf("\n");
        }

        else if(fun == 2){ //se for 2 ele entra no menu para deletar algum personagem
            system("clear"); //limpa a tela do terminal
            layout_parcial_edicao(); //mostra o layout de edição
            deletar(personagens,id_identificador, nome, classe, level, raca, genero); //chama a função para executar a deleção do personagem
            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar(); 
            getchar(); 
            printf("\n");
        }

        else if(fun == 3){ //se for 3 ele entra no menu de listagem de personagem   
            system("clear");
            layout_parcial_listar(); //mostra o menu com o título de "Lista de personagem"
            listar(personagens, id_identificador, nome, classe, level, raca, genero); //chama a função e mostra a lista de personagem
            printf("\nPressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            printf("\n");
        }

        else if(fun == 4){ //se for 4 ele entra no menu para atualização de personagem
            int posicao;
            printf("Qual a posição do personagem: ");
            scanf("%i", &posicao); //usuário escolhe o personagem que ele quer atualizar os dados
            system("clear");
            layout_parcial_edicao(); //mostra o título de edição
            atualizar(posicao, id_identificador, nome, classe, level, raca, genero); //chama a função para atualizar o personagem
            printf("Pressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            printf("\n");
        }

        else if(fun == 5){ //se for 5 ele entra no menu para mostrar os dados de um personagem específico
            int posicao;
            printf("Qual a posição do personagem: ");
            scanf("%i", &posicao); //usuário escolhe o personagem que ele quer que apareça todos os dados
            system("clear");
            listar_id(posicao, id_identificador, nome, classe, level, raca, genero); //chama a função para mostrar os dados do personagem escolhido
            printf("\nPressione ENTER para retornar ao menu principal: ");
            // Necessario para o ENTER funcionar
            getchar();
            getchar();
            printf("\n");
        }

        else if(fun == 6){ //se for 6 ele entra no menu para visualizar o maior, menor e a media de level
            system("clear");
            int maior, menor, media, pos;
            layout_level(); //mostra o menu com opções de maior, menor e média de level
            estatisticas(level, nome, personagens, &maior, &menor, &media);
            printf("Pressione ENTER para retornar ao menu principal: ");
            getchar();
            getchar();
            printf("\n");

        }


        else if(fun != 0){ //caso o usuário digite um valor inválido no menu principal
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
