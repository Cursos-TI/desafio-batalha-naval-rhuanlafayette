#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
//criação do tabuleiro 10x10, todos os valores 0 conforme solicitado
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}
    };
        
    printf("         Tabuleiro: \n"); //printf titulo 'Tabuleiro' 
    char linhacoluna[10] = {'A','B','C','D','E','F','G','H','I','J'}; // criação de Array para que cada coluna seja denominada por uma letra
        for (int c = 0; c < 10; c++) { // criação do for para que o sistema imprima cada letra sem precisar criar 10 linhas de codigo
         printf("  %c", linhacoluna[c]); // coloquei um espaço antes do %c para que cada letra ficasse separada e organizada
        };
        printf("\n"); //printf com \n para pular uma linha assim que as colunas forem definidas

    int numerolinha[10] = {1,2,3,4,5,6,7,8,9,0}; //array para enumerar as linhas e dar sequência ao jogo
        for (int l = 0; l < 10; l++) { // for externo para imprimir cada número de linha
        printf("%d", numerolinha[l]);
        for(int j = 0; j < 10; j++){ // for interno para imprimir o tabuleiro linha por linha
            printf("%3d", tabuleiro[j][l]); //Utilizei o %3d para dar uma distância de modo que os valores ficassem embaixo de cada letra da coluna
        }
        printf("\n"); // printf para pular uma linha
    };


    int naviovertical[1] = {3}; // array criado para atualizar o tabuleiro com o navio vertical
    int naviohorizontal[1] = {3}; // array criado para atualizar o tabuleiro com o navio horizontal
    for (int n = 2; n < 5; n++) // for criado para atualizar os numeros no tabuleiro
    { // Com a intenção de mudar C7,D7 e E7, o for alterou os campos 3,4 e 5 da linha 7 para 3
        tabuleiro[n][6]= naviovertical[0];
    };
    for(int v = 1;v < 4; v++){ //Seguindo a mesma lógica, o for alterou os campos F2,F3 e F4 para 3, criando o navio horizontal
        tabuleiro[5][v] = naviohorizontal[0];
    };

  //INICIO DESAFIO AVENTUREIRO NAVIO DIAGOLNAL
    for(int d = 0; d < 1; d++){ //utilização do for para alterar os elementos das linhas e colunas
        for (int di = 0; di < 3; di++) //campo [0][0] será o primeiro a mudar, depois [1][1] e [2][2]
        {
            tabuleiro[d][di] = 3; //codigo para que onde antes fosse 0 agora se torne 3
            d++;}; // A linha e a coluna precisam aumentar em conjunto, então coloqquei o for externo para rodar apenas 1 vez, e o interno para aumentar a coluna em conjunto
        };

        for(int d = 0; d < 1; d++){ //mesma logica do for acima. 
            for (int di = 9; di > 6; di--) // dessa vez para que o barco ficasse na dioganal embaixo [9][0],[8][1],[7][2] alterei a posição inicial e fui diminuindo
            {
                tabuleiro[d][di] = 3;
                d++;};
            };
    
    
    printf("\n"); //printf para pular uma linha
    printf("Tabuleiro Atualizado com navios: \n"); // inicio da impressão do novo tabuleiro com os navios

    
    for (int c = 0; c < 10; c++) { // repeti o código que imprime as colunas definidas no array ' linhacoluna'
         printf("  %c", linhacoluna[c]);
        };
        printf("\n");
    
    
    for (int l = 0; l < 10; l++) { //repeti o codigo que imprime o número das linhas e o tabuleiro linha por linha
        printf("%d", numerolinha[l]);
        for(int j = 0; j < 10; j++){
            printf("%3d", tabuleiro[j][l]);
        } // como os valores já foram alterados internamente no codigo, a repetir o código ele imprime o tabuleiro atualizado
        printf("\n"); //pular linha
    };
    
    
        
        
   
    
    
    
    











    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
