#ifndef CADALUNO_H
#define CADALUNO_H

#define MAX_STR 100

// Prototipos
void layout_completo();
void layout_parcial();
void layout_parcial_edicao();
void layout_parcial_listar();
void layout_level();
void criar(int personagens, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]);
void listar(int personagens, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]);
void atualizar(int vbn,int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]);
void deletar(int vbn,int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]);
void listar_id(int vbn, int id_identificador[], char nomes[][MAX_STR], char classe[][MAX_STR], int level[], char raca[][MAX_STR], char genero[][MAX_STR]);
void maior(int level[], char nomes[][MAX_STR], int personagens);
void menor(int level[], char nomes[][MAX_STR], int personagens);
void media(int level[], int personagens);

#endif