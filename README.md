# Trabalho Prático Funções e Ponteiros em C
Desenvolver, em equipes, um projeto em C que utilize funções e ponteiros de forma correta e explícita, aplicando os conceitos vistos em sala. O tema é livre (o grupo escolhe), desde que os requisitos técnicos abaixo sejam atendidos.

Nosso código se baseia em um sistema de cadastro de personagens

Este projeto implementa um CRUD de personagens (Create, Read, Update, Delete), além de estatísticas como maior nível, menor nível e média de níveis.  

Estrutura dos Arquivos:

- Prototipos.h
  Contém constantes e protótipos de funções usadas no programa.  
  (Serve para organizar e permitir a modularização do código.)

- Persomain.c 
  Arquivo principal (função main()).  
  Responsável por interagir com o usuário, exibir menus e chamar as funções implementadas.

- Persofunc.c
  Contém a implementação das funções declaradas no Prototipos.h, como:  
  - Cadastro de personagens  
  - Listagem de personagens  
  - Atualização  
  - Exclusão  
  - Estatísticas (maior, menor e média de níveis)

# Como Compilar e Executar

No terminal, vá até a pasta que está os arquivos salvos, use ls para verificar os caminhos que está passando.

Quando encontrar os arquivos na pasta certa, passe para o próximo passo.

# Compilar os três arquivos juntos
gcc Persomain.c Persofunc.c -o person

# Executar o programa
./person
