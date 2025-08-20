#ifndef Prototipos_H //se Prototipos_H ainda não foi definido 

#define Prototipos_H //define a constante Prototipos_H para controle

#define MAX_STR 100 //define 100 como valor max para a string 

//funções que exibem os layouts 
void layout_completo(); //função do layout completo do menu de personagens

void layout_parcial(); //função que mostra o layout parcial do menu de personagens

void layout_parcial_edicao(); //função que mostra o layout do menu parcial de edição dos personagens

void layout_parcial_listar(); //função que mostra o layout para a listagem dos personagens

void layout_level(); //função que mostra o menu para as situações que envolvem o level (maior, menor e media)

void qtd_jogadores(int *personagens, int *qrt); //função que define a quantidade de jogadores

//funções de CRUD(create, read, update e delete)

//criação de personagens
//função criar recebe como parâmetros a quantidade de personagens, arrays com IDs, nomes, classe, level, raça e gênero
void criar(int personagens, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]);

//listagem de personagens
//mostra todos os personagens cadastrados
void listar(int personagens, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]);

//atualização de informações de um personagem
//recebe a posição(id_identificador) do personagem que vai ser atualizado e os arrays com os dados
void atualizar(int vbn,int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]);

//delete de personagens
//apaga toda a informação contida em determinado id_identicador(posição) escolhido pelo usuário
void deletar(int valor, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]);

//lista um as informações de um único personagem, tal personagem vai ser escolhido pelo usuário a partir do id_identificador
void listar_id(int vbn, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]);

//funções para o cálculo do maior, menor e média dos levels
void estatisticas(int level[], char nomes[][MAX_STR], int personagens,int *maior,int *menor, int *media);

#endif //fim 
