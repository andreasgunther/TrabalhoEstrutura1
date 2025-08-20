#include <stdio.h> //biblioteca padrão
#include "Prototipos.h" //inclui o arquivo que esta nossos protótipos
#include <stdlib.h> //biblioteca que contém funções do sistema, como o clear para limpar o terminal


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

//layout de level
void layout_level(){ 
    printf("=========================================\n");
    printf("=        CRIADOR DE PERSONAGENS         =\n");
    printf("=========================================\n");
}

// Layout parcial para criar personagem
void layout_parcial(){
    printf("=========================================\n");
    printf("=        CRIADOR DE PERSONAGENS         =\n");
    printf("=========================================\n");
}

//layout parcial para edição de personagem
void layout_parcial_edicao(){
    printf("=========================================\n");
    printf("=         EDIÇÃO DE PERSONAGENS         =\n");
    printf("=========================================\n");
}

//layout parcial para lista de personagem
void layout_parcial_listar(){
    printf("=========================================\n");
    printf("=          LISTA DE PERSONAGENS         =\n");
    printf("=========================================\n");
}

//função para determinar a quantia de jogadores
void qtd_jogadores(int *personagens, int *qrt){
    do{
        printf("\nSão permitidos somente 10 players.\n");
        printf("Qual é a quantidade personagens que iram patircipar dessa aventura: ");
        scanf("%i", personagens);
        if(*personagens > 10 || *personagens < 1){
            printf("\nNumero não permitido de pesonagems, Tente novamente.\n");
        }else{
            *qrt = 1;
        }
     } while(*qrt != 1);
}

//função para criar personagens com parâmetros passados
void criar(int personagens, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]) {


    int valor = personagens; //valor recebe a quantidade de personagens
    int n = 1; //contador para exibir os personagens
    for(int i = 0; i < valor; i++){ //loop para criar os personagens
        printf("\n");
        printf("             PERSONAGEM  %i            \n", n);
        printf("\n");
        printf("Nome do personagem: ");
        scanf("%s", nomes[i]); //armazena o nome digitado no array
        printf("\nQual id identificador do personagem: ");
        scanf("%i", &id_identificador[i]); //armazena o id_identificador(posição) digitado no array
        printf("\nQual a classe do personagem: ");
        scanf("%s", classe[i]); //armazena a classe digitada no array
        printf("\nQual o level do personagem: ");
        scanf("%i", &level[i]); //armazena o level digitado no array
        printf("\nQual a raça do personagem: ");
        scanf("%s", raca[i]); //armazena a raça digitada no array
        printf("\nQual o gênero do personagem: ");
        scanf("%s", genero[i]); //armazena o gênero digitado no array
        printf("\n");
        n++; //incrementa o contador de personagens
        printf("--------------------------------------\n");
    }
    
}

//função para listar todos os personagens
void listar(int personagens, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]){
    int valor = personagens; //quantidade de personagens
    for(int i = 0; i < valor; i++){ //loop para listar cada personagem
        int *id = &id_identificador[i]; //ponteiro para ID(endereço) do personagem
        if(id_identificador[i] != 0){ //verificando se o personagem existe
            printf("\n");
            printf("Nome do personagem: %s\n", nomes[i]);
            printf("Qual id identificador do personagem: %i\n", id_identificador[i]);
            printf("Qual a classe do personagem: %s\n", classe[i]);
            printf("Qual o level do personagem: %i\n", level[i]);
            printf("Qual a raça do personagem: %s\n", raca[i]);
            printf("Qual o gênero do personagem: %s\n", genero[i]);
            printf("id do personagem: %p", (void *)id); //vai ter como saida o endereço da memória que é o id do usuário
            printf("\n");
        }
    }   
}

//função para atualizar um personagem específicp
void atualizar(int vbn,int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]){

    int valor = vbn - 1; //ajusta o indice para o personagem, vbn é a posição do personagem
    printf("\n---------Dados Antigos---------\n"); //vai mostrar os dados antigos daquele personagem que não foi atualizado ainda

    printf("\nNome do personagem:-------------- %s\n",nomes[valor]);
    printf("Identificador do personagem:----- %i\n", id_identificador[valor]);
    printf("Classe do personagem:------------ %s\n", classe[valor]);
    printf("Level do personagem:------------- %i\n", level[valor]);
    printf("Raça do personagem:-------------- %s\n", raca[valor]);
    printf("Gênero do personagem:------------ %s\n", genero[valor]);

    printf("\n----------Dados Novos----------\n"); //mostra os dados novos do personagem, aquele que  o usuário vai digitar

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

//função para deletar um personagem específico
void deletar(int valor, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]){
    
    for(int i = 0; i < valor; i++){ //loop para listar cada personagem
        if(id_identificador[i] != 0){ //verificando se o personagem existe
            printf("\n");
            printf("Nome do personagem: %s\n", nomes[i]);
            printf("Qual id identificador do personagem: %i\n", id_identificador[i]);
            printf("Qual a classe do personagem: %s\n", classe[i]);
            printf("Qual o level do personagem: %i\n", level[i]);
            printf("Qual a raça do personagem: %s\n", raca[i]);
            printf("Qual o gênero do personagem: %s\n", genero[i]);
            printf("\n");
        }
    } 
    
    int posicao; //declarando a variável posicao para controle dos id_identificador
    printf("\nQual a posição do personagem: ");
    scanf("%i", &posicao); //escolhe qual personagem quer apagar

    printf("\n");
    posicao = posicao - 1; //ajusta o índice
    nomes[posicao][0] = '\0';          // string vazia
    id_identificador[posicao] = 0;     // zera o ID
    classe[posicao][0] = '\0';         // string vazia
    level[posicao] = 0;                // zera o level
    raca[posicao][0] = '\0';           // string vazia
    genero[posicao][0] = '\0';         // string vazia
    printf("Personagem Deletado.\n");
    printf("\n");
}

//função que mostra os dados específicos de um personagem
void listar_id(int vbn, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]){ //chama a funcão listar_id com os parâmetros
    vbn = vbn - 1; //ajusta o índice
    int *id = &id_identificador[vbn]; //ponteiro para o ID(endereço)
        if(id_identificador[vbn] != 0){ //verifica se o personagem existe
            printf("=========================================\n");
            printf("       LISTA DE PERSONAGEM %s            \n",nomes[vbn] );
            printf("=========================================\n");
            printf("\n");
            printf("Nome do personagem: %s\n", nomes[vbn]);
            printf("Qual id identificador do personagem: %i\n", id_identificador[vbn]);
            printf("Qual a classe do personagem: %s\n", classe[vbn]);
            printf("Qual o level do personagem: %i\n", level[vbn]);
            printf("Qual a raça do personagem: %s\n", raca[vbn]);
            printf("id do personagem:: %p \n", (void *)id); //vai ter como saida o endereço da memória que é o id do usuário
        }
}
void estatisticas(int level[],char nomes[][MAX_STR], int personagens,int *maior,int *menor, int *media){
    int soma = 0;
    int inicial = 0;
    char pos_maior = 0, pos_menor = 0;
    for (int i = 0; i < personagens; i++){
        if(level[i] != 0){
            if(inicial == 0){ // primeiro valor válido
                *maior = level[i];
                *menor = level[i];
                pos_maior = i;
                pos_menor = i;
                inicial = 1;
            }
            if(level[i] > *maior){ //verificando o maior level 
                *maior = level[i]; //atribuindo o level ao maior se a condição for verdadeira
                pos_maior = i;
            }
            if(level[i] < *menor){ //verificando o menor level
                *menor = level[i]; //atribuindo o level ao menor se a condição for verdadeira
                pos_menor = i;
            }
        }
        soma += level[i]; //adicionando as somas dos levels
    }
    *media = soma / personagens; // continua sendo int, como você quer
    printf("O maior level é %i do personagem %s.\n", *maior, nomes[pos_maior]);
    printf("O menor level é %i do personagem %s.\n", *menor, nomes [pos_menor]);
    printf("A média dos levels é: %d\n", *media);
}
      
