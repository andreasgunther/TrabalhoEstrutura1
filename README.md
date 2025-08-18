# Trabalho Prático Funções e Ponteiros em C
Desenvolver, em equipes, um projeto em C que utilize funções e ponteiros de forma correta e explícita, aplicando os conceitos vistos em sala. O tema é livre (o grupo escolhe).

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

No terminal, vá até a pasta que está os arquivos salvos, use o comando ls para verificar os caminhos que está passando.

Quando encontrar os arquivos na pasta certa, passe para o próximo passo.

# Compilar os três arquivos juntos
gcc Persomain.c Persofunc.c -o Tes

# Executar o programa
./Tes

# PRINTS COM O CÓDIGO EM EXECUÇÃO
# Menu com todas as funcionalidades do nosso sistema
<img width="1920" height="1080" alt="Exemplo_execução1" src="https://github.com/user-attachments/assets/17f0320b-c720-4677-9b5d-88a8f583ac55" />
# Depois de entrar no menu criação e criar 2 personagens
<img width="1920" height="1080" alt="Exemplo_execução2" src="https://github.com/user-attachments/assets/719a54d6-2809-45f5-b08d-37d06382e8f5" />
# A lista de todos os personagens
<img width="1920" height="1080" alt="Exemplo_Execução3" src="https://github.com/user-attachments/assets/c6465157-fe21-4fb5-864d-5245b544bf6f" />
# Tela de quando for atualizar do personagem, aparecendo os dados antigos e os novos
<img width="1920" height="1080" alt="Exemplo_Execução4" src="https://github.com/user-attachments/assets/20b969b9-a6d0-4b08-a44e-f2fe919415de" />
# Tela para pegar as estatísticas de level
<img width="1920" height="1080" alt="Exemplo_Execução5" src="https://github.com/user-attachments/assets/9ae87bab-4667-4797-a880-886088d8cec4" />
# Tela do maior level
<img width="1920" height="1080" alt="Exemplo_Execução6" src="https://github.com/user-attachments/assets/3ef5193e-6532-4eaa-ae50-6bedd4d891f2" />
# Tela do menor level
<img width="1920" height="1080" alt="Exemplo_Execução7" src="https://github.com/user-attachments/assets/26dd8bb4-1e1a-4dbe-a344-3ea65de2c526" />
# Tela da média de level
<img width="1920" height="1080" alt="Exemplo_Execução8" src="https://github.com/user-attachments/assets/8048f143-7ed2-48cc-892f-fcf033a6a4fe" />


  94c6-41b7-ac4d-e4fc5691ef75" />

