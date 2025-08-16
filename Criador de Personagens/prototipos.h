#ifndef PROTOTIPOS.H
#define PROTOTIPOS.H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYERS 10 // Maximo de players
#define MAX_STR 20     // Maximo de caracteres por espaco na lista

// Prototipos
void layout_completo();

void layout_parcial();

void criar(char *nome, int level, char *classe, char genero, char *raca,
           int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
           char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens);

void listar(int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
            char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens);

void editar(int id_identificador,
            int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
            char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens);

void remover(int id_identificador,
             int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
             char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens);

void id_personagem(int id_identificador,
                   int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
                   char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens);

void maior(int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
           char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens);

void menor(int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
           char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens);

void media(int ids_identificadores[], int ids_enderecos[], char nomes[][MAX_STR], int levels[], 
           char classes[][MAX_STR], char generos[], char racas[][MAX_STR], int *total_personagens);

#endif